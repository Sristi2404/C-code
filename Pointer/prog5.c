#include <stdio.h>

int main() {
    int arr1[5], arr2[5];  // Declare two arrays of size 5
    int *ptr1, *ptr2;      // Declare two pointers for the arrays
    int i;

    // Pointer initialization: set ptr1 to point to the first element of arr1
    ptr1 = arr1;

    // Pointer initialization: set ptr2 to point to the first element of arr2
    ptr2 = arr2;

    // Input elements into the first array
    printf("Enter 5 elements for the first array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", (ptr1 + i));  // Store values in arr1 using pointer
    }

    // Copy elements from arr1 to arr2 using pointers
    for (i = 0; i < 5; i++) {
        *(ptr2 + i) = *(ptr1 + i);  // Copy value from arr1 to arr2 using pointers
    }

    // Display the copied array (arr2)
    printf("Elements of the copied array are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr2 + i));  // Print elements of arr2 using pointer
    }

    return 0;
}

