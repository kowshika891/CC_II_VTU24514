#include <stdio.h> 
#include <string.h> 
 
int main() 
{ 
    char str1[100], str2[100]; 
    int freq[256] = {0}; 
 
    printf("Enter first string: "); 
    scanf("%s", str1); 
 
    printf("Enter second string: "); 
    scanf("%s", str2); 
 
    if(strlen(str1) != strlen(str2)) 
    { 
        printf("Not an Anagram\n"); 
        return 0; 
    } 
 
    for(int i=0; str1[i]; i++) 
        freq[str1[i]]++; 
 
    for(int i=0; str2[i]; i++) 
        freq[str2[i]]--; 
 
    for(int i=0;i<256;i++) 
    { 
        if(freq[i]!=0) 
        { 
            printf("Not an Anagram\n"); 
            return 0; 
        } 
    } 
 
    printf("Valid Anagram\n"); 
 
    return 0; 
}
