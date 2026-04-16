#include<stdio.h> 
 
int main() 
{ 
    int a[100],n,i,val,k=0; 
 
    printf("Enter number of elements: "); 
    scanf("%d",&n); 
 
    printf("Enter elements:\n"); 
    for(i=0;i<n;i++) 
        scanf("%d",&a[i]); 
 
    printf("Enter element to remove: "); 
    scanf("%d",&val); 
 
    for(i=0;i<n;i++) 
    { 
        if(a[i]!=val) 
        { 
            a[k]=a[i]; 
            k++; 
        } 
    } 
 
    printf("Array after removing element:\n"); 
 
    for(i=0;i<k;i++) 
        printf("%d ",a[i]); 
 
    return 0; 
}
