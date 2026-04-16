#include<stdio.h> 
 
int climbStairs(int n) 
{ 
    if(n==1) 
        return 1; 
 
    int a=1,b=2,c; 
 
    for(int i=3;i<=n;i++) 
    { 
        c=a+b; 
        a=b; 
        b=c; 
    } 
 
    return b; 
} 
 
int main() 
{ 
    int n; 
 
    printf("Enter number of stairs: "); 
    scanf("%d",&n); 
 
    printf("Number of ways: %d",climbStairs(n)); 
 
    return 0; 
}
