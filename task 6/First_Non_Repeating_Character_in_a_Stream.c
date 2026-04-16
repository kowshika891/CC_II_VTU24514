#include<stdio.h> 
#include<string.h> 
 
int main() 
{ 
    char str[100]; 
    int freq[256]={0}; 
 
    printf("Enter character stream: "); 
    scanf("%s",str); 
 
    for(int i=0;i<strlen(str);i++) 
    { 
        freq[str[i]]++; 
 
        for(int j=0;j<=i;j++) 
        { 
            if(freq[str[j]]==1) 
            { 
                printf("%c ",str[j]); 
                break; 
            } 
        } 
    } 
 
    return 0; 
}
