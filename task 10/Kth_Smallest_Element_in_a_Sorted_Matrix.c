#include<stdio.h> 
 
int main() 
{ 
    int mat[10][10],arr[100]; 
    int n,i,j,k,index=0,temp; 
 
    printf("Enter size of matrix: "); 
    scanf("%d",&n); 
 
    printf("Enter matrix elements:\n"); 
    for(i=0;i<n;i++) 
        for(j=0;j<n;j++) 
        { 
            scanf("%d",&mat[i][j]); 
            arr[index++]=mat[i][j]; 
        } 
 
    for(i=0;i<index-1;i++) 
    { 
        for(j=i+1;j<index;j++) 
        { 
            if(arr[i]>arr[j]) 
            { 
                temp=arr[i]; 
                arr[i]=arr[j]; 
                arr[j]=temp; 
            } 
        } 
    } 
 
    printf("Enter k: "); 
    scanf("%d",&k); 
 
    printf("Kth smallest element: %d",arr[k-1]); 
 
    return 0; 
}
