#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;   // Temporary variable to hold one of the values during the swap
    temp = *a;  // Store the value pointed to by a in temp
    *a = *b;    // Assign the value pointed to by b to a
    *b = temp;  // Assign the stored value in temp to b
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the numbers before swapping
    printf("\nBefore swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function, passing the addresses of num1 and num2
    swap(&num1, &num2);

    // Display the numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

