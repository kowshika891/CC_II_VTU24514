#include<stdio.h> 
#include<stdlib.h> 
 
struct node 
{ 
    int data; 
    struct node *next; 
}; 
 
struct node* create(int n) 
{ 
    struct node *head=NULL,*temp,*newnode; 
    int i; 
 
    for(i=1;i<=n;i++) 
    { 
        newnode=(struct node*)malloc(sizeof(struct node)); 
        printf("Enter data: "); 
        scanf("%d",&newnode->data); 
        newnode->next=NULL; 
 
        if(head==NULL) 
        { 
            head=temp=newnode; 
        } 
        else 
        { 
            temp->next=newnode; 
            temp=newnode; 
        } 
    } 
    return head; 
} 
 
void display(struct node *head) 
{ 
    while(head!=NULL) 
    { 
        printf("%d ",head->data); 
        head=head->next; 
    } 
} 
 
struct node* rotate(struct node* head,int k) 
{ 
    struct node *temp=head,*prev=NULL; 
    int count=1; 
 
    while(temp->next!=NULL) 
    { 
        temp=temp->next; 
        count++; 
    } 
 
    temp->next=head; 
 
    k=k%count; 
    int steps=count-k; 
 
    temp=head; 
    for(int i=1;i<steps;i++) 
        temp=temp->next; 
 
    head=temp->next; 
    temp->next=NULL; 
 
    return head; 
} 
 
int main() 
{ 
    struct node *head; 
    int n,k; 
 
    printf("Enter number of nodes: "); 
    scanf("%d",&n); 
 
    head=create(n); 
 
    printf("Enter rotation value k: "); 
    scanf("%d",&k); 
 
    head=rotate(head,k); 
 
    printf("Rotated List: "); 
    display(head); 
 
    return 0; 
}
