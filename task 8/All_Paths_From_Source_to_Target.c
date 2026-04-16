#include<stdio.h> 
 
int graph[10][10], path[10], n; 
 
void dfs(int node,int dest,int pos) 
{ 
    path[pos]=node; 
 
    if(node==dest) 
    { 
        for(int i=0;i<=pos;i++) 
            printf("%d ",path[i]); 
        printf("\n"); 
        return; 
    } 
 
    for(int i=0;i<n;i++) 
    { 
        if(graph[node][i]) 
            dfs(i,dest,pos+1); 
    } 
} 
 
int main() 
{ 
    int src,dest; 
 
    printf("Enter number of vertices: "); 
    scanf("%d",&n); 
 
    printf("Enter adjacency matrix:\n"); 
    for(int i=0;i<n;i++) 
        for(int j=0;j<n;j++) 
            scanf("%d",&graph[i][j]); 
 
    printf("Enter source and destination: "); 
    scanf("%d %d",&src,&dest); 
 
    printf("All Paths:\n"); 
 
    dfs(src,dest,0); 
 
    return 0; 
}
