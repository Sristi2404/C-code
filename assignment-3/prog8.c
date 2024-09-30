#include <stdio.h>

int main() {
    int array[100], uniqueArray[100], n, i, j, k;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Initialize the unique array with the first element
    uniqueArray[0] = array[0];
    k = 1;  // This will keep track of the size of the unique array

    // Loop through the array to check for duplicates
    for (i = 1; i < n; i++) {
        int isDuplicate = 0;

        // Check if the current element is already in the uniqueArray
        for (j = 0; j < k; j++) {
            if (array[i] == uniqueArray[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If the element is not a duplicate, add it to the uniqueArray
        if (!isDuplicate) {
            uniqueArray[k] = array[i];
            k++;
        }
    }

    // Display the array after removing duplicates
    printf("Array after deleting duplicate elements:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", uniqueArray[i]);
    }
    printf("\n");

    return 0;
}

