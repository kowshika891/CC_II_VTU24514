#include<stdio.h> 
 
int visited[10], graph[10][10], n; 
 
void dfs(int v) 
{ 
    visited[v]=1; 
 
    for(int i=1;i<=n;i++) 
    { 
        if(graph[v][i] && !visited[i]) 
            dfs(i); 
    } 
} 
 
int main() 
{ 
    int provinces=0; 
 
    printf("Enter number of cities: "); 
    scanf("%d",&n); 
 
    printf("Enter adjacency matrix:\n"); 
    for(int i=1;i<=n;i++) 
        for(int j=1;j<=n;j++) 
            scanf("%d",&graph[i][j]); 
 
    for(int i=1;i<=n;i++) 
    { 
        if(!visited[i]) 
        { 
            dfs(i); 
            provinces++; 
        } 
    } 
 
    printf("Number of Provinces: %d",provinces); 
 
    return 0; 
}
