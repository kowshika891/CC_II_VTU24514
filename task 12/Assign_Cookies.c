#include<stdio.h> 
 
void sort(int a[], int n) 
{ 
    int i,j,temp; 
 
    for(i=0;i<n-1;i++) 
        for(j=i+1;j<n;j++) 
            if(a[i] > a[j]) 
            { 
                temp=a[i]; 
                a[i]=a[j]; 
                a[j]=temp; 
            } 
} 
 
int main() 
{ 
    int g[100],s[100]; 
    int n,m,i=0,j=0,count=0; 
 
    printf("Enter number of children: "); 
    scanf("%d",&n); 
 
    printf("Enter greed factors:\n"); 
    for(int k=0;k<n;k++) 
        scanf("%d",&g[k]); 
 
    printf("Enter number of cookies: "); 
    scanf("%d",&m); 
 
    printf("Enter cookie sizes:\n"); 
    for(int k=0;k<m;k++) 
        scanf("%d",&s[k]); 
 
    sort(g,n); 
    sort(s,m); 
 
    while(i<n && j<m) 
    { 
        if(s[j] >= g[i]) 
        { 
            count++; 
            i++; 
            j++; 
        } 
        else 
            j++; 
    } 
 
    printf("Satisfied children: %d",count); 
 
    return 0; 
}
