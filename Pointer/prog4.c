#include <stdio.h>

int main() {
    int arr[5];  // Declare an array of size 5
    int *ptr;    // Declare a pointer to an integer
    int i;

    // Pointer initialization: set ptr to point to the first element of the array
    ptr = arr;

    // Input elements into the array using the pointer
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        // Using the pointer to store input values in the array
        scanf("%d", (ptr + i));  
    }

    // Print the array elements using the pointer
    printf("The array elements are:\n");
    for (i = 0; i < 5; i++) {
        // Using the pointer to access and print the values of the array
        printf("%d ", *(ptr + i));
    }

    return 0;
}

