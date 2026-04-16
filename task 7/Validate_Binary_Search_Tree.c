#include<stdio.h> 
#include<stdlib.h> 
#include<limits.h> 
 
struct Node 
{ 
    int data; 
    struct Node *left,*right; 
}; 
 
struct Node* newNode(int data) 
{ 
    struct Node* node=(struct Node*)malloc(sizeof(struct Node)); 
    node->data=data; 
    node->left=node->right=NULL; 
    return node; 
} 
 
int isBST(struct Node* root,int min,int max) 
{ 
    if(root==NULL) 
        return 1; 
 
    if(root->data<min || root->data>max) 
        return 0; 
 
    return isBST(root->left,min,root->data-1) && 
           isBST(root->right,root->data+1,max); 
} 
 
int main() 
{ 
    struct Node* root=newNode(4); 
    root->left=newNode(2); 
    root->right=newNode(6); 
    root->left->left=newNode(1); 
    root->left->right=newNode(3); 
 
    if(isBST(root,INT_MIN,INT_MAX)) 
        printf("Valid BST"); 
    else 
        printf("Not a BST"); 
 
    return 0; 
}
