#include <stdio.h>

int main() {
    int array[100], n, i, j, temp;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Bubble Sort to arrange elements in ascending order
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                // Swap the elements
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Display the sorted array
    printf("Array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

