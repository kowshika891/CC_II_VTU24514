#include<stdio.h> 
 
int min(int a,int b,int c) 
{ 
    int m=a; 
    if(b<m) m=b; 
    if(c<m) m=c; 
    return m; 
} 
 
int main() 
{ 
    int n,cost1,cost7,cost30; 
    int dp[366]={0}; 
 
    printf("Enter number of travel days: "); 
    scanf("%d",&n); 
 
    int days[n]; 
 
    printf("Enter travel days:\n"); 
    for(int i=0;i<n;i++) 
        scanf("%d",&days[i]); 
 
    printf("Enter costs for 1-day, 7-day, 30-day tickets:\n"); 
    scanf("%d %d %d",&cost1,&cost7,&cost30); 
 
    int dayIndex=0; 
 
    for(int i=1;i<=365;i++) 
    { 
        if(dayIndex<n && i==days[dayIndex]) 
        { 
            int a = dp[i-1] + cost1; 
            int b = dp[(i>=7)?i-7:0] + cost7; 
            int c = dp[(i>=30)?i-30:0] + cost30; 
 
            dp[i]=min(a,b,c); 
 
            dayIndex++; 
        } 
        else 
            dp[i]=dp[i-1]; 
    } 
 
    printf("Minimum cost: %d",dp[days[n-1]]); 
 
    return 0; 
}
