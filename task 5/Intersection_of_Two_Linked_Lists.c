#include<stdio.h> 
#include<stdlib.h> 
 
struct node 
{ 
    int data; 
    struct node* next; 
}; 
 
struct node* newNode(int data) 
{ 
    struct node* temp=(struct node*)malloc(sizeof(struct node)); 
    temp->data=data; 
    temp->next=NULL; 
    return temp; 
} 
 
int main() 
{ 
    struct node *head1,*head2,*temp1,*temp2; 
 
    head1=newNode(1); 
    head1->next=newNode(2); 
    head1->next->next=newNode(3); 
 
    head2=newNode(4); 
    head2->next=head1->next; 
 
    temp1=head1; 
 
    while(temp1) 
    { 
        temp2=head2; 
        while(temp2) 
        { 
            if(temp1==temp2) 
            { 
                printf("Intersection at node with data %d",temp1->data); 
                return 0; 
            } 
            temp2=temp2->next; 
        } 
        temp1=temp1->next; 
    } 
 
    printf("No Intersection"); 
 
    return 0; 
}
