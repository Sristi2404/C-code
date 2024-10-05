#include <stdio.h>

#define ROWS 3  // Number of rows
#define COLS 3  // Number of columns

int main() {
    int arr[ROWS][COLS];  // Declare a 2D array
    int *ptr;             // Declare a pointer to an integer
    int i, j;

    // Input elements for the 2D array
    printf("Enter elements for the 3x3 array:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &arr[i][j]);  // Store elements in the array
        }
    }

    // Pointer initialization: point to the first element of the 2D array
    ptr = &arr[0][0];

    // Access and display the 2D array elements using pointer arithmetic
    printf("\nElements of the 2D array are:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", *(ptr + i * COLS + j));  // Access element using pointer arithmetic
        }
        printf("\n");
    }

    return 0;
}

