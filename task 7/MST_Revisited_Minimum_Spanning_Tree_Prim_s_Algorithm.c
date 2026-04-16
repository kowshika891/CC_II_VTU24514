#include<stdio.h> 
 
int main() 
{ 
    int cost[10][10],visited[10]={0}; 
    int n,ne=1,min,a,b,u,v,total=0; 
 
    printf("Enter number of vertices: "); 
    scanf("%d",&n); 
 
    printf("Enter cost matrix:\n"); 
 
    for(int i=1;i<=n;i++) 
        for(int j=1;j<=n;j++) 
            scanf("%d",&cost[i][j]); 
 
    visited[1]=1; 
 
    while(ne<n) 
    { 
        min=999; 
 
        for(int i=1;i<=n;i++) 
        { 
            for(int j=1;j<=n;j++) 
            { 
                if(cost[i][j]<min) 
                { 
                    if(visited[i]!=0) 
                    { 
                        min=cost[i][j]; 
                        a=u=i; 
                        b=v=j; 
                    } 
                } 
            } 
        } 
 
        if(visited[u]==0 || visited[v]==0) 
        { 
            printf("Edge %d:(%d,%d) cost:%d\n",ne++,a,b,min); 
            total+=min; 
            visited[b]=1; 
        } 
 
        cost[a][b]=cost[b][a]=999; 
    } 
 
    printf("Minimum cost=%d",total); 
 
    return 0; 
}
