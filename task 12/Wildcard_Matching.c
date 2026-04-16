#include<stdio.h> 
#include<string.h> 
 
int match(char *str, char *pattern) 
{ 
    int s=0,p=0,star=-1,match=0; 
 
    while(str[s]) 
    { 
        if(pattern[p]=='?' || pattern[p]==str[s]) 
        { 
            s++; p++; 
        } 
        else if(pattern[p]=='*') 
        { 
            star=p; 
            match=s; 
            p++; 
        } 
        else if(star!=-1) 
        { 
            p=star+1; 
            match++; 
            s=match; 
        } 
        else 
            return 0; 
    } 
 
    while(pattern[p]=='*') 
        p++; 
 
    return pattern[p]=='\0'; 
} 
 
int main() 
{ 
    char str[100],pattern[100]; 
 
    printf("Enter string: "); 
    scanf("%s",str); 
 
    printf("Enter pattern: "); 
    scanf("%s",pattern); 
 
    if(match(str,pattern)) 
        printf("Pattern matches string"); 
    else 
        printf("Pattern does not match"); 
 
    return 0; 
}
