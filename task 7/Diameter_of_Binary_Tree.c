#include<stdio.h> 
#include<stdlib.h> 
 
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
 
int height(struct Node* node) 
{ 
    if(node==NULL) 
        return 0; 
 
    int l=height(node->left); 
    int r=height(node->right); 
 
    return (l>r?l:r)+1; 
} 
 
int diameter(struct Node* tree) 
{ 
    if(tree==NULL) 
        return 0; 
 
    int lh=height(tree->left); 
    int rh=height(tree->right); 
 
    int ld=diameter(tree->left); 
    int rd=diameter(tree->right); 
 
    int max=(lh+rh>ld)?lh+rh:ld; 
 
    return (max>rd)?max:rd; 
} 
 
int main() 
{ 
    struct Node* root=newNode(1); 
    root->left=newNode(2); 
    root->right=newNode(3); 
    root->left->left=newNode(4); 
    root->left->right=newNode(5); 
 
    printf("Diameter of tree: %d",diameter(root)); 
 
    return 0; 
}
