#include<stdio.h> 
 
int countBits(int n) 
{ 
    int count=0; 
 
    while(n) 
    { 
        count += n & 1; 
        n >>= 1; 
    } 
 
    return count; 
} 
 
int main() 
{ 
    int n; 
 
    printf("Enter number: "); 
    scanf("%d",&n); 
 
    printf("Bit counts:\n"); 
 
    for(int i=0;i<=n;i++) 
        printf("%d -> %d\n",i,countBits(i)); 
 
    return 0; 
}
