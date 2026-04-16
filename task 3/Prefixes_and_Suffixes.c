#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char str[100]; 
    int n; 
 
    printf("Enter string: "); 
    scanf("%s", str); 
 
    n = strlen(str); 
 
    printf("\nPrefixes:\n"); 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j <= i; j++) 
            printf("%c", str[j]); 
        printf("\n"); 
    } 
 
    printf("\nSuffixes:\n"); 
    for (int i = 0; i < n; i++) { 
        for (int j = i; j < n; j++) 
            printf("%c", str[j]); 
        printf("\n"); 
    } 
 
    return 0; 
}
