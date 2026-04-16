#include<stdio.h> 
 
int main() 
{ 
    int a[100],size,n,count=0; 
 
    printf("Enter size of flowerbed: "); 
    scanf("%d",&size); 
 
    printf("Enter flowerbed values (0/1):\n"); 
    for(int i=0;i<size;i++) 
        scanf("%d",&a[i]); 
 
    printf("Enter number of flowers to plant: "); 
    scanf("%d",&n); 
 
    for(int i=0;i<size;i++) 
    { 
        if(a[i]==0 && 
           (i==0 || a[i-1]==0) && 
           (i==size-1 || a[i+1]==0)) 
        { 
            a[i]=1; 
            count++; 
        } 
    } 
 
    if(count>=n) 
        printf("True - Flowers can be planted"); 
    else 
        printf("False - Cannot plant flowers"); 
 
    return 0; 
}
