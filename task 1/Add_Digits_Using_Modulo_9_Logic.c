#include <stdio.h> 
 
int addDigits(int n){ 
    if(n == 0) 
        return 0; 
    return 1 + (n - 1) % 9; 
} 
 
int main(){ 
    int n; 
 
    printf("Enter number: "); 
    scanf("%d",&n); 
 
    printf("Single digit result = %d\n", addDigits(n)); 
 
    return 0; 
}
