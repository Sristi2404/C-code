#include <stdio.h>

int main() {
    int array[100], n, i;
    int largest, smallest;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Initialize the first element as both largest and smallest
    largest = smallest = array[0];

    // Loop through the array to find the largest and smallest elements
    for (i = 1; i < n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }

    // Display the results
    printf("The largest element is: %d\n", largest);
    printf("The smallest element is: %d\n", smallest);

    return 0;
}

