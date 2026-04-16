#include <stdio.h> 
#include <stdlib.h> 
 
void findThreeSum(int nums[], int n) { 
    for (int i = 0; i < n - 2; i++) { 
        if (i > 0 && nums[i] == nums[i - 1]) continue; 
         
        int left = i + 1, right = n - 1; 
        while (left < right) { 
            int sum = nums[i] + nums[left] + nums[right]; 
            if (sum == 0) { 
                printf("Triplet: %d %d %d\n", nums[i], nums[left], nums[right]); 
                while (left < right && nums[left] == nums[left + 1]) left++; 
                while (left < right && nums[right] == nums[right - 1]) right--; 
                 left++; 
                 right--; 
            } else if (sum < 0) {  
                 left++; 
            } else { 
                 right--; 
            } 
        } 
    } 
} 
 
int main() { 
    int n; 
    printf("Enter the number of elements: ");  
    scanf("%d", &n); 
     
    int nums[n]; 
    printf("Enter the elements: ");  
    for (int i = 0; i < n; i++) {  
        scanf("%d", &nums[i]); 
    } 
     
    // Sort the array 
    qsort(nums, n, sizeof(int), (int (*)(const void *, const void *))compare);  
     
    findThreeSum(nums, n); 
     
    return 0; 
}
