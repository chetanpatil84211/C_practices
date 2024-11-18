#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
	

    int arr1[] = {5, 6, 7, 8};
    
    // Calculate the total number of elements
    int n = sizeof(arr) / sizeof(arr[0]) + sizeof(arr1) / sizeof(arr1[0]);
    printf("n=%d\n", n);

    int temp[n], i, j;

    // Copy elements from arr[] to temp[]
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        temp[i] = arr[i];
    }

    // Copy elements from arr1[] to temp[] starting from the next position
    for (j = 0; j < sizeof(arr1) / sizeof(arr1[0]); j++, i++) {
        temp[i] = arr1[j];
    }

    // Print the concatenated array
    for (int k = 0; k < n; k++) {
        printf("%d\t", temp[k]);
    }
    printf("\n");
    printf("size is temp=%ld\n",sizeof(temp)/sizeof(temp[0]));
    return 0;
}

