#include<stdio.h> 
#include<stdlib.h> 
 
struct Node 
{ 
    int data; 
    int hd; 
    struct Node *left,*right; 
}; 
 
struct Node* newNode(int data) 
{ 
    struct Node* node=(struct Node*)malloc(sizeof(struct Node)); 
    node->data=data; 
    node->left=node->right=NULL; 
    return node; 
} 
 
void vertical(struct Node* root,int hd) 
{ 
    if(root==NULL) 
        return; 
 
    vertical(root->left,hd-1); 
 
    printf("Node %d at HD %d\n",root->data,hd); 
 
    vertical(root->right,hd+1); 
} 
 
int main() 
{ 
    struct Node* root=newNode(1); 
    root->left=newNode(2); 
    root->right=newNode(3); 
    root->left->left=newNode(4); 
    root->left->right=newNode(5); 
 
    vertical(root,0); 
 
    return 0; 
}
