#include <stdio.h>

#define SIZE 5  // Define the size of the arrays

// Function to swap two arrays using pointers
void swapArrays(int *arr1, int *arr2, int size) {
    int temp, i;

    // Loop to swap each element of arr1 with arr2
    for (i = 0; i < size; i++) {
        // Swap the elements using a temporary variable
        temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

int main() {
    int arr1[SIZE], arr2[SIZE];  // Declare two arrays
    int i;

    // Input elements for the first array
    printf("Enter %d elements for the first array:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements for the second array
    printf("Enter %d elements for the second array:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr2[i]);
    }

    // Display arrays before swapping
    printf("\nBefore swapping:\n");
    printf("Array 1: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr2[i]);
    }

    // Call the swap function to swap the arrays
    swapArrays(arr1, arr2, SIZE);

    // Display arrays after swapping
    printf("\n\nAfter swapping:\n");
    printf("Array 1: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}

