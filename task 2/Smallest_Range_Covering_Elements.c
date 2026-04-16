#include <stdio.h> 
#include <stdlib.h> 
 
typedef struct { 
    int value; 
    int list_index; 
    int element_index; 
} Element; 
 
int compare(const void *a, const void *b) { 
    return ((Element *)a)->value - ((Element *)b)->value; 
} 
 
int main() { 
    int k; 
    printf("Enter the number of lists: "); 
    scanf("%d", &k); 
     
    int n[k]; 
    int *lists[k]; 
     
    for (int i = 0; i < k; i++) { 
        printf("Enter the number of elements in list %d: ", i + 1); 
        scanf("%d", &n[i]); 
         
        lists[i] = (int *)malloc(n[i] * sizeof(int)); 
         
        printf("Enter elements of list %d: ", i + 1); 
        for (int j = 0; j < n[i]; j++) { 
            scanf("%d", &lists[i][j]); 
        } 
    } 
     
    Element heap[k]; 
    for (int i = 0; i < k; i++) { 
        heap[i].value = lists[i][0]; 
        heap[i].list_index = i; 
        heap[i].element_index = 0; 
    } 
     
    qsort(heap, k, sizeof(Element), compare); 
     
    int min_range = heap[k - 1].value - heap[0].value; 
    int range_start = heap[0].value; 
     
    while (1) { 
        int min_value = heap[0].value; 
        int max_value = heap[k - 1].value; 
         
        if (max_value - min_value < min_range) { 
            min_range = max_value - min_value; 
            range_start = min_value; 
        } 
         
        heap[0].element_index++; 
        if (heap[0].element_index == n[heap[0].list_index]) break; 
         
        heap[0].value = lists[heap[0].list_index][heap[0].element_index]; 
        qsort(heap, k, sizeof(Element), compare); 
    } 
     
    printf("Smallest range: [%d, %d]\n", range_start, range_start + min_range); 
     
    return 0; 
}
