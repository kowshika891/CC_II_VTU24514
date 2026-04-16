#include<stdio.h> 
 
int main() 
{ 
    int score[100],n,i,j,temp; 
 
    printf("Enter number of athletes: "); 
    scanf("%d",&n); 
 
    printf("Enter scores:\n"); 
    for(i=0;i<n;i++) 
        scanf("%d",&score[i]); 
 
    for(i=0;i<n-1;i++) 
    { 
        for(j=i+1;j<n;j++) 
        { 
            if(score[i] < score[j]) 
            { 
                temp=score[i]; 
                score[i]=score[j]; 
                score[j]=temp; 
            } 
        } 
    } 
 
    printf("Ranks:\n"); 
 
    for(i=0;i<n;i++) 
    { 
        if(i==0) printf("Gold Medal\n"); 
        else if(i==1) printf("Silver Medal\n"); 
        else if(i==2) printf("Bronze Medal\n"); 
        else printf("%d\n",i+1); 
    } 
 
    return 0; 
}
