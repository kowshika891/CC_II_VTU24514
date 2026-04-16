#include<stdio.h> 
#include<stdlib.h> 
 
struct node 
{ 
    int data; 
    struct node* next; 
}; 
 
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
    int n,i; 
    struct node *head=NULL,*temp,*newnode; 
    struct node* arr[100]; 
 
    printf("Enter number of nodes: "); 
    scanf("%d",&n); 
 
    for(i=0;i<n;i++) 
    { 
        newnode=(struct node*)malloc(sizeof(struct node)); 
        scanf("%d",&newnode->data); 
        newnode->next=NULL; 
 
        if(head==NULL) 
            head=temp=newnode; 
        else 
        { 
            temp->next=newnode; 
            temp=newnode; 
        } 
 
        arr[i]=newnode; 
    } 
 
    int start=0,end=n-1; 
 
    while(start<end) 
    { 
        arr[start]->next=arr[end]; 
        start++; 
 
        if(start==end) break; 
 
        arr[end]->next=arr[start]; 
        end--; 
    } 
 
    arr[start]->next=NULL; 
 
    display(head); 
 
    return 0; 
}
