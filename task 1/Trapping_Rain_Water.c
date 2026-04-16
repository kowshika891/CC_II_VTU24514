#include <stdio.h> 
 
int min(int a, int b){ 
    return (a < b) ? a : b; 
} 
 
int main(){ 
    int n, i; 
 
    printf("Enter number of bars: "); 
    scanf("%d",&n); 
 
    int height[n], left[n], right[n]; 
 
    printf("Enter heights:\n"); 
    for(i=0;i<n;i++) 
        scanf("%d",&height[i]); 
 
    left[0] = height[0]; 
    for(i=1;i<n;i++) 
        left[i] = (height[i] > left[i-1]) ? height[i] : left[i-1]; 
 
    right[n-1] = height[n-1]; 
    for(i=n-2;i>=0;i--) 
        right[i] = (height[i] > right[i+1]) ? height[i] : right[i+1];  
 
    int water = 0; 
 
    for(i=0;i<n;i++) 
        water += min(left[i], right[i])  - height[i]; 
 
    printf("Trapped Rain Water = %d \n", water); 
 
    return 0; 
}
