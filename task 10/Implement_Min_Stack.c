#include<stdio.h> 
 
#define MAX 100 
 
int stack[MAX]; 
int top=-1; 
 
void push(int x) 
{ 
    stack[++top]=x; 
} 
 
void pop() 
{ 
    if(top==-1) 
        printf("Stack Underflow\n"); 
    else 
        printf("Popped element: %d\n",stack[top--]); 
} 
 
int getMin() 
{ 
    int min=stack[0]; 
 
    for(int i=1;i<=top;i++)  
    { 
        if(stack[i]<min) 
            min=stack[i]; 
    } 
 
    return min; 
} 
 
int main() 
{ 
    push(5); 
    push(2); 
    push(8); 
    push(1); 
 
    printf("Minimum element: %d\n",getMin()); 
 
    pop(); 
 
    printf("Minimum element: %d\n",getMin()); 
 
    return 0; 
}
