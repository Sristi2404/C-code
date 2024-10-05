#include <stdio.h>

#define SIZE 5  // Define the size of the array

// Function to reverse an array using pointers
void reverseArray(int *arr, int size) {
    int *start = arr;           // Pointer to the first element
    int *end = arr + size - 1;  // Pointer to the last element
    int temp;

    // Loop to reverse the array
    while (start < end) {
        // Swap the elements at the start and end pointers
        temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers towards the center
        start++;
        end--;
    }
}

int main() {
    int arr[SIZE];  // Declare an array of size 5
    int i;

    // Input elements for the array
    printf("Enter %d elements for the array:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the array before reversing
    printf("\nBefore reversing:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    // Call the reverse function to reverse the array
    reverseArray(arr, SIZE);

    // Display the array after reversing
    printf("\n\nAfter reversing:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

