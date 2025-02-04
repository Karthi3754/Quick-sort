#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), compare);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("This is Karthik");

    return 0;
}

//Time complexity : 0(n log(n))
//space complexity : 0(log(n))