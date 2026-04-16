#include<stdio.h> 
 
int parent[10]; 
 
int find(int i) 
{ 
    while(parent[i]) 
        i=parent[i]; 
    return i; 
} 
 
int uni(int i,int j) 
{ 
    if(i!=j) 
    { 
        parent[j]=i; 
        return 1; 
    } 
    return 0; 
} 
 
int main() 
{ 
    int cost[10][10],n,min,a,b,u,v,total=0,ne=1; 
 
    printf("Enter number of vertices: "); 
    scanf("%d",&n); 
 
    printf("Enter cost matrix:\n"); 
    for(int i=1;i<=n;i++) 
        for(int j=1;j<=n;j++) 
            scanf("%d",&cost[i][j]); 
 
    while(ne<n) 
    { 
        min=999; 
 
        for(int i=1;i<=n;i++) 
        { 
            for(int j=1;j<=n;j++) 
            { 
                if(cost[i][j]<min) 
                { 
                    min=cost[i][j]; 
                    a=u=i; 
                    b=v=j; 
                } 
            } 
        } 
 
        u=find(u); 
        v=find(v); 
 
        if(uni(u,v)) 
        { 
            printf("Edge %d:(%d,%d) cost:%d\n",ne++,a,b,min); 
            total+=min; 
        } 
 
        cost[a][b]=cost[b][a]=999; 
    } 
 
    printf("Minimum cost = %d",total); 
 
    return 0; 
}
