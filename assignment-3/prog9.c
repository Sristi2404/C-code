#include <stdio.h>

int main() {
    int array[100], n, i, searchElement, found = 0;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Input the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    // Search for the element in the array
    for (i = 0; i < n; i++) {
        if (array[i] == searchElement) {
            found = 1;
            printf("Element %d found at position %d.\n", searchElement, i + 1);
            break; // Stop searching once the element is found
        }
    }

    // If the element is not found
    if (!found) {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}

