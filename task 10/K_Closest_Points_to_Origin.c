#include<stdio.h> 
 
int main() 
{ 
    int x[100],y[100],dist[100]; 
    int n,k,i,j,temp; 
 
    printf("Enter number of points: "); 
    scanf("%d",&n); 
 
    printf("Enter coordinates:\n"); 
 
    for(i=0;i<n;i++) 
    { 
        scanf("%d %d",&x[i],&y[i]); 
        dist[i]=x[i]*x[i]+y[i]*y[i]; 
    } 
 
    for(i=0;i<n-1;i++) 
    { 
        for(j=i+1;j<n;j++) 
        { 
            if(dist[i]>dist[j]) 
            { 
                temp=dist[i]; 
                dist[i]=dist[j]; 
                dist[j]=temp; 
 
                temp=x[i]; x[i]=x[j]; x[j]=temp; 
                temp=y[i]; y[i]=y[j]; y[j]=temp; 
            } 
        } 
    } 
 
    printf("Enter k: "); 
    scanf("%d",&k); 
 
    printf("Closest points:\n"); 
 
    for(i=0;i<k;i++) 
        printf("(%d,%d)\n",x[i],y[i]); 
 
    return 0; 
}
