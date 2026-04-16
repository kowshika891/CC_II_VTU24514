#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
 
int valid(char *s, int start, int len) 
{ 
    if(len>1 && s[start]=='0') return 0; 
 
    int num=0; 
 
    for(int i=0;i<len;i++) 
        num=num*10+(s[start+i]-'0'); 
 
    return num<=255; 
} 
 
int main() 
{ 
    char s[20]; 
 
    printf("Enter digits: "); 
    scanf("%s",s); 
 
    int n=strlen(s); 
 
    printf("Valid IP addresses:\n"); 
 
    for(int i=1;i<=3;i++) 
    for(int j=1;j<=3;j++) 
    for(int k=1;k<=3;k++) 
    { 
        int l=n-i-j-k; 
 
        if(l>=1 && l<=3) 
        { 
            if(valid(s,0,i)&&valid(s,i,j)&&valid(s,i+j,k)&&valid(s,i+j+k,l)) 
            { 
                printf("%.*s.%.*s.%.*s.%.*s\n", 
                       i,s, 
                       j,s+i, 
                       k,s+i+j, 
                       l,s+i+j+k); 
            } 
        } 
    } 
 
    return 0; 
}
