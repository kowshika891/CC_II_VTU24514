#include <stdio.h> 
 
int removeDuplicates(int nums[], int n) { 
    if (n == 0) return 0; 
     
    int j = 0; 
    for (int i = 1; i < n; i++) { 
        if (nums[i] != nums[j]) { 
            j++; 
            nums[j] = nums[i]; 
        } 
    } 
    return j + 1; 
} 
 
int main() { 
    int n; 
    printf("Enter the number of elements: "); 
    scanf("%d", &n); 
     
    int nums[n]; 
    printf("Enter the elements (sorted): "); 
    for (int i = 0; i < n; i++) { 
        scanf("%d", &nums[i]); 
    } 
     
    int new_length = removeDuplicates(nums, n); 
     
    printf("Array after removing duplicates: "); 
    for (int i = 0; i < new_length; i++) { 
        printf("%d ", nums[i]); 
    } 
    printf("\n"); 
     
    return 0; 
}
