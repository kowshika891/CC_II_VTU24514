#include<stdio.h> 
#include<stdlib.h> 
 
struct node 
{ 
    int data; 
    struct node* next; 
}; 
 
void insert(struct node** head,int data) 
{ 
    struct node *newnode=(struct node*)malloc(sizeof(struct node)); 
    newnode->data=data; 
    newnode->next=*head; 
    *head=newnode; 
} 
 
void insertionSort(struct node **head) 
{ 
    struct node *sorted=NULL,*current=*head; 
 
    while(current) 
    { 
        struct node *next=current->next; 
 
        if(sorted==NULL || sorted->data>=current->data) 
        { 
            current->next=sorted; 
            sorted=current; 
        } 
        else 
        { 
            struct node *temp=sorted; 
            while(temp->next && temp->next->data<current->data) 
                temp=temp->next; 
 
            current->next=temp->next; 
            temp->next=current; 
        } 
 
        current=next; 
    } 
 
    *head=sorted; 
} 
 
void display(struct node* head) 
{ 
    while(head) 
    { 
        printf("%d ",head->data); 
        head=head->next; 
    } 
} 
 
int main() 
{ 
    struct node *head=NULL; 
 
    insert(&head,5); 
    insert(&head,3); 
    insert(&head,8); 
    insert(&head,1); 
 
    insertionSort(&head); 
 
    display(head); 
 
    return 0; 
}
