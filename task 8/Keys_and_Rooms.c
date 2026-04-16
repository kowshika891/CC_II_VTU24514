#include<stdio.h> 
 
int graph[10][10], visited[10], n; 
 
void dfs(int v) 
{ 
    visited[v]=1; 
 
    for(int i=0;i<n;i++) 
    { 
        if(graph[v][i] && !visited[i]) 
            dfs(i); 
    } 
} 
 
int main() 
{ 
    printf("Enter number of rooms: "); 
    scanf("%d",&n); 
 
    printf("Enter key matrix:\n"); 
    for(int i=0;i<n;i++) 
        for(int j=0;j<n;j++) 
            scanf("%d",&graph[i][j]); 
 
    dfs(0); 
 
    for(int i=0;i<n;i++) 
    { 
        if(!visited[i]) 
        { 
            printf("Cannot visit all rooms"); 
            return 0; 
        } 
    } 
 
    printf("All rooms can be visited"); 
 
    return 0; 
}
