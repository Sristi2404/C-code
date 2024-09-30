#include <stdio.h>

int main() {
    int array[100], n, i;
    int highest, second_highest;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Check if the array has at least two elements
    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 1;
    }

    // Initialize highest and second_highest to the first two elements
    if (array[0] > array[1]) {
        highest = array[0];
        second_highest = array[1];
    } else {
        highest = array[1];
        second_highest = array[0];
    }

    // Traverse the array starting from the third element
    for (i = 2; i < n; i++) {
        if (array[i] > highest) {
            second_highest = highest; // Update second_highest before updating highest
            highest = array[i];
        } else if (array[i] > second_highest && array[i] != highest) {
            second_highest = array[i];
        }
    }

    // Check if second_highest was updated
    if (highest == second_highest) {
        printf("There is no distinct second-highest element in the array.\n");
    } else {
        printf("The second-highest element is: %d\n", second_highest);
    }

    return 0;
}

