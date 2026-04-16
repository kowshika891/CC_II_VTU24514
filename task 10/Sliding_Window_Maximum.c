#include<stdio.h> 
 
int main() 
{ 
    int arr[100],n,k,i,j,max; 
 
    printf("Enter number of elements: "); 
    scanf("%d",&n); 
 
    printf("Enter elements:\n"); 
    for(i=0;i<n;i++) 
        scanf("%d",&arr[i]); 
 
    printf("Enter window size: "); 
    scanf("%d",&k); 
 
    printf("Sliding window maximum:\n"); 
 
    for(i=0;i<=n-k;i++) 
    { 
        max=arr[i]; 
 
        for(j=1;j<k;j++) 
        { 
            if(arr[i+j]>max) 
                max=arr[i+j]; 
        } 
 
        printf("%d ",max); 
    } 
 
    return 0; 
}
