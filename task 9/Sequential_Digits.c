#include <stdio.h> 
 
int main() 
{ 
    int low,high; 
 
    printf("Enter range (low high): "); 
    scanf("%d %d",&low,&high); 
 
    printf("Sequential digits:\n"); 
 
    for(int i=1;i<=9;i++) 
    { 
        int num=i; 
 
        for(int j=i+1;j<=9;j++) 
        { 
            num=num*10+j; 
 
            if(num>=low && num<=high) 
                printf("%d ",num); 
        } 
    } 
 
    return 0; 
}
