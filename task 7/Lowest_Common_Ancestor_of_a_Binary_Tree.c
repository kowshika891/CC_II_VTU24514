#include<stdio.h> 
#include<stdlib.h> 
 
struct Node 
{ 
    int data; 
    struct Node *left,*right; 
}; 
 
struct Node* newNode(int data) 
{ 
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node)); 
    temp->data=data; 
    temp->left=temp->right=NULL; 
    return temp; 
} 
 
struct Node* LCA(struct Node* root,int n1,int n2) 
{ 
    if(root==NULL) 
        return NULL; 
 
    if(root->data==n1 || root->data==n2) 
        return root; 
 
    struct Node* left=LCA(root->left,n1,n2); 
    struct Node* right=LCA(root->right,n1,n2); 
 
    if(left && right) 
        return root; 
 
    return (left!=NULL)?left:right; 
} 
 
int main() 
{ 
    struct Node* root=newNode(1); 
    root->left=newNode(2); 
    root->right=newNode(3); 
    root->left->left=newNode(4); 
    root->left->right=newNode(5); 
 
    int n1=4,n2=5; 
 
    struct Node* result=LCA(root,n1,n2); 
 
    printf("LCA of %d and %d is %d",n1,n2,result->data); 
 
    return 0; 
}
