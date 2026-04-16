#include <stdio.h> 
#include <string.h> 
 
void computeLPS(char s[], int lps[]) { 
    int n = strlen(s); 
    int len = 0; 
    lps[0] = 0; 
 
    for (int i = 1; i < n; ) { 
        if (s[i] == s[len]) { 
            len++; 
            lps[i] = len; 
            i++; 
        } else { 
            if (len != 0) 
                len = lps[len - 1]; 
            else { 
                lps[i] = 0; 
                i++; 
            } 
        } 
    } 
} 
 
int main() { 
    char s[100]; 
    int lps[100]; 
 
    printf("Enter string: "); 
    scanf("%s", s); 
 
    int n = strlen(s); 
 
    computeLPS(s, lps); 
 
    int len = lps[n - 1]; 
 
    if (len > 0) 
        printf("Longest prefix-suffix length: %d\n", len); 
    else 
        printf("Just a legend\n"); 
 
    return 0; 
}
