#include <stdio.h> 
 
int main(){ 
    int n; 
 
    printf("Enter number: "); 
    scanf("%d",&n); 
 
    int num = n; 
 
    while(n % 2 == 0) 
        n /= 2; 
 
    while(n % 3 == 0) 
        n /= 3; 
 
    while(n % 5 == 0) 
        n /= 5; 
 
    if(n == 1) 
        printf("%d is an Ugly Number\n", num); 
    else 
        printf("%d is Not an Ugly Number\n", num); 
 
    return 0; 
}
