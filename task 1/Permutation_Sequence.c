#include <stdio.h> 
 
int factorial(int n){ 
    int f=1,i; 
    for(i=1;i<=n;i++) 
        f*=i; 
    return f; 
} 
 
int main(){ 
    int n,k,i,j; 
 
    printf("Enter n and k: "); 
    scanf("%d%d",&n,&k); 
 
    int numbers[n]; 
    for(i=0;i<n;i++) 
        numbers[i]=i+1; 
 
    k--; 
 
    for(i=n;i>=1;i--){ 
        int f = factorial(i-1); 
        int index = k / f; 
 
        printf("%d",numbers[index]);  
 
        for(j=index;j<i-1;j++) 
            numbers[j]=numbers[j+1]; 
 
        k %= f; 
    } 
 
    return 0; 
}
