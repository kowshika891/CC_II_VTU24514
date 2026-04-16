#include <stdio.h> 
 
#define MAX 100 
 
int q1[MAX], q2[MAX]; 
int front1=-1,rear1=-1,front2=-1,rear2=-1; 
 
void push(int x) 
{ 
    q2[++rear2] = x; 
 
    while(front1 <= rear1 && front1 != -1) 
        q2[++rear2] = q1[front1++]; 
 
    front1 = 0; 
    rear1 = rear2; 
 
    for(int i=0;i<=rear2;i++) 
        q1[i]=q2[i]; 
 
    rear2=-1; 
} 
 
void pop() 
{ 
    if(front1==-1 || front1>rear1) 
        printf("Stack Underflow\n"); 
    else 
        printf("Popped element: %d\n", q1[front1++]); 
} 
 
int main() 
{ 
    push(10); 
    push(20); 
    push(30); 
 
    pop(); 
    pop(); 
 
    return 0; 
}
