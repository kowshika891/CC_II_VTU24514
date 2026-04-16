#include<stdio.h> 
 
int main() 
{ 
    int a[100],n,target; 
 
    printf("Enter number of elements: "); 
    scanf("%d",&n); 
 
    printf("Enter elements:\n"); 
    for(int i=0;i<n;i++) 
        scanf("%d",&a[i]); 
 
    printf("Enter target sum: "); 
    scanf("%d",&target); 
 
    printf("Pairs are:\n"); 
 
    for(int i=0;i<n;i++) 
    { 
        for(int j=i+1;j<n;j++) 
        { 
            if(a[i]+a[j]==target) 
                printf("%d %d\n",a[i],a[j]); 
        } 
    } 
 
    return 0; 
}
