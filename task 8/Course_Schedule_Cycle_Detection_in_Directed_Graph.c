#include<stdio.h> 
 
int graph[10][10], visited[10], stack[10], n; 
 
int dfs(int v) 
{ 
    visited[v]=1; 
    stack[v]=1; 
 
    for(int i=0;i<n;i++) 
    { 
        if(graph[v][i]) 
        { 
            if(!visited[i] && dfs(i)) 
                return 1; 
 
            else if(stack[i]) 
                return 1; 
        } 
    } 
 
    stack[v]=0; 
    return 0; 
} 
 
int main() 
{ 
    printf("Enter number of courses: "); 
    scanf("%d",&n); 
 
    printf("Enter adjacency matrix:\n"); 
    for(int i=0;i<n;i++) 
        for(int j=0;j<n;j++) 
            scanf("%d",&graph[i][j]); 
 
    for(int i=0;i<n;i++) 
    { 
        if(!visited[i]) 
        { 
            if(dfs(i)) 
            { 
                printf("Cycle detected - Courses cannot be completed"); 
                return 0; 
            } 
        } 
    } 
 
    printf("No cycle - Courses can be completed"); 
 
    return 0; 
}
