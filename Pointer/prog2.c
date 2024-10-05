#include <stdio.h>

int main() {
    // Declare two integer variables
    int num1, num2, sum;

    // Declare pointers for the two integers
    int *ptr1, *ptr2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Initialize pointers with the addresses of the variables
    ptr1 = &num1;
    ptr2 = &num2;

    // Perform addition using dereferencing of pointers
    sum = *ptr1 + *ptr2;

    // Display the result
    printf("The sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);

    return 0;
}

