#include <stdio.h> 
#include <math.h> 
 
int main() { 
    double x, result; 
 
    printf("Enter a number: "); 
    scanf("%lf", &x); 
 
    result = sqrt(x); 
 
    printf("Square root of %.2lf = %.2lf\n", x, result); 
 
    return 0; 
}
