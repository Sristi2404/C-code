#include <stdio.h>

#define SIZE 5  // Define the size of the array

// Function to search for an element in an array using pointers
int searchElement(int *arr, int size, int key) {
    int *ptr = arr;  // Pointer to the first element of the array
    int i;

    // Loop through the array using pointer
    for (i = 0; i < size; i++) {
        if (*ptr == key) {  // If the element is found, return its index
            return i;
        }
        ptr++;  // Move the pointer to the next element
    }

    // Return -1 if the element is not found
    return -1;
}

int main() {
    int arr[SIZE];  // Declare an array of size 5
    int key, result, i;

    // Input elements for the array
    printf("Enter %d elements for the array:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search for
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Call the search function
    result = searchElement(arr, SIZE, key);

    // Display the result
    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}

