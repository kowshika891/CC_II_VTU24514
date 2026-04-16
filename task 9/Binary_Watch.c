#include <stdio.h> 
 
int countBits(int n) 
{ 
    int count=0; 
 
    while(n) 
    { 
        count+=n&1; 
        n>>=1; 
    } 
 
    return count; 
} 
 
int main() 
{ 
    int leds; 
 
    printf("Enter number of LEDs: "); 
    scanf("%d",&leds); 
 
    printf("Possible times:\n"); 
 
    for(int h=0;h<12;h++) 
    { 
        for(int m=0;m<60;m++) 
        { 
            if(countBits(h)+countBits(m)==leds) 
                printf("%d:%02d\n",h,m); 
        } 
    } 
 
    return 0; 
}
