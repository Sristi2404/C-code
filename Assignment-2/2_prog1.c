#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}

int main() {
    int num1, num2, choice;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    int result;

    switch (choice) {
        case 1:
            result = add(num1, num2);
            printf("Sum: %d\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Difference: %d\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Product: %d\n", result);
            break;
        case 4:
            result = divide(num1, num2);
            if (result != 0) { // Check if division was successful
                printf("Quotient: %d\n", result);
            }
            break;
default:
            printf("Invalid choice.\n");
    }

    return 0;
}

