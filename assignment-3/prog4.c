#include <stdio.h>
int main() {
    int array[100], position, i, n;

    // Get the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Get the position of the element to delete
    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &position);

    // Check if the position is valid
    if(position < 1 || position > n) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n);
    } else {
        // Shift the elements to the left to delete the element
        for(i = position - 1; i < n - 1; i++) {
            array[i] = array[i + 1];
        }

        // Reduce the array size by 1
        n--;

        // Display the array after deletion
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}

