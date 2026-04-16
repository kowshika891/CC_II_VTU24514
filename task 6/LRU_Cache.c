#include<stdio.h> 
 
int main() 
{ 
    int pages[50],cache[10]; 
    int n,capacity,i,j,found; 
 
    printf("Enter number of pages: "); 
    scanf("%d",&n); 
 
    printf("Enter page sequence:\n"); 
    for(i=0;i<n;i++) 
        scanf("%d",&pages[i]); 
 
    printf("Enter cache size: "); 
    scanf("%d",&capacity); 
 
    for(i=0;i<capacity;i++) 
        cache[i]=-1; 
 
    for(i=0;i<n;i++) 
    { 
        found=0; 
 
        for(j=0;j<capacity;j++) 
        { 
            if(cache[j]==pages[i]) 
                found=1; 
        } 
 
        if(!found) 
            cache[i%capacity]=pages[i]; 
 
        printf("Cache: "); 
        for(j=0;j<capacity;j++) 
            printf("%d ",cache[j]); 
        printf("\n"); 
    } 
 
    return 0; 
}
