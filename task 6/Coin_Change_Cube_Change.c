#include<stdio.h> 
 
int main() 
{ 
    int coins[10],n,amount,i,count=0; 
 
    printf("Enter number of coins: "); 
    scanf("%d",&n); 
 
    printf("Enter coin values:\n"); 
    for(i=0;i<n;i++) 
        scanf("%d",&coins[i]); 
 
    printf("Enter amount: "); 
    scanf("%d",&amount); 
 
    for(i=0;i<n;i++) 
    { 
        while(amount>=coins[i]) 
        { 
            amount-=coins[i]; 
            count++; 
        } 
    } 
 
    printf("Minimum coins required: %d",count); 
 
    return 0; 
}
