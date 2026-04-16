#include<stdio.h> 
 
int max(int a,int b) 
{ 
    return (a>b)?a:b; 
} 
 
int main() 
{ 
    int n,a[100],dp[100]; 
 
    printf("Enter number of houses: "); 
    scanf("%d",&n); 
 
    printf("Enter money in houses:\n"); 
    for(int i=0;i<n;i++) 
        scanf("%d",&a[i]); 
 
    dp[0]=a[0]; 
    dp[1]=max(a[0],a[1]); 
 
    for(int i=2;i<n;i++) 
        dp[i]=max(dp[i-1],dp[i-2]+a[i]); 
 
    printf("Maximum money robbed: %d",dp[n-1]); 
 
    return 0; 
}
