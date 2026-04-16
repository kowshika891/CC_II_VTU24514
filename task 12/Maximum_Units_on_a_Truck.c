#include<stdio.h> 
int main() 
{ 
    int box[100],unit[100]; 
    int n,truck,i,j,temp,total=0; 
 
    printf("Enter number of box types: "); 
    scanf("%d",&n); 
 
    printf("Enter boxes and units per box:\n"); 
    for(i=0;i<n;i++) 
        scanf("%d %d",&box[i],&unit[i]); 
 
    printf("Enter truck capacity: "); 
    scanf("%d",&truck); 
 
    for(i=0;i<n-1;i++) 
        for(j=i+1;j<n;j++) 
            if(unit[i] < unit[j]) 
            { 
                temp=unit[i]; 
                unit[i]=unit[j]; 
                unit[j]=temp; 
 
                temp=box[i]; 
                box[i]=box[j]; 
                box[j]=temp; 
            } 
 
    for(i=0;i<n && truck>0;i++) 
    { 
        int take = (box[i] < truck) ? box[i] : truck; 
        total += take * unit[i]; 
        truck -= take; 
    } 
 
    printf("Maximum units on truck: %d",total); 
 
    return 0; 
}
