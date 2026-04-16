#include <stdio.h> 
 
void findCombinations(int arr[], int n, int index, int target, int result[], int size) 
{ 
    if(target == 0) 
    { 
        for(int i=0;i<size;i++) 
            printf("%d ",result[i]); 
        printf("\n"); 
        return; 
    } 
 
    for(int i=index;i<n;i++) 
    { 
        if(arr[i] <= target) 
        { 
            result[size] = arr[i]; 
            findCombinations(arr,n,i+1,target-arr[i],result,size+1); 
        } 
    } 
} 
 
int main() 
{ 
    int arr[100],result[100]; 
    int n,target; 
 
    printf("Enter number of elements: "); 
    scanf("%d",&n); 
 
    printf("Enter elements:\n"); 
    for(int i=0;i<n;i++) 
        scanf("%d",&arr[i]); 
 
    printf("Enter target sum: "); 
    scanf("%d",&target); 
 
    printf("Combinations:\n"); 
 
    findCombinations(arr,n,0,target,result,0); 
 
    return 0; 
}
