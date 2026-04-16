#include <stdio.h> 
 
void mergeSortedArrays(int arr1[], int arr2[], int n1, int n2) { 
    int i = 0, j = 0, k = 0; 
    int merged[n1 + n2]; 
     
    while (i < n1 && j < n2) { 
        if (arr1[i] < arr2[j]) { 
            merged[k++] = arr1[i++]; 
        } else { 
            merged[k++] = arr2[j++]; 
        } 
    } 
     
    while (i < n1) { 
        merged[k++] = arr1[i++]; 
    } 
     
    while (j < n2) { 
        merged[k++] = arr2[j++]; 
    } 
     
    printf("Merged array: "); 
    for (int i = 0; i < n1 + n2; i++) { 
        printf("%d ", merged[i]); 
    } 
    printf("\n"); 
} 
 
int main() { 
    int n1, n2; 
    printf("Enter size of first array: "); 
    scanf("%d", &n1); 
     
    int arr1[n1]; 
    printf("Enter elements of first sorted array: "); 
    for (int i = 0; i < n1; i++) { 
        scanf("%d", &arr1[i]); 
    } 
     
    printf("Enter size of second array: "); 
    scanf("%d", &n2); 
     
    int arr2[n2]; 
    printf("Enter elements of second sorted array: "); 
    for (int i = 0; i < n2; i++) { 
        scanf("%d", &arr2[i]); 
    } 
     
    mergeSortedArrays(arr1, arr2, n1, n2); 
     
    return 0; 
}
