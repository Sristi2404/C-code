#include <stdio.h>
// Define a structure for complex numbers
typedef struct {
    float real;  // Real part
    float imag;  // Imaginary part
} Complex;
int main() {
    Complex num1, num2, sum, difference;

    // Input the first complex number
    printf("Enter the first complex number (real and imaginary parts): ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input the second complex number
    printf("Enter the second complex number (real and imaginary parts): ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Perform addition
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    // Perform subtraction
    difference.real = num1.real - num2.real;
    difference.imag = num1.imag - num2.imag;

    // Display the results
    printf("\nResults:\n");
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Difference: %.2f + %.2fi\n", difference.real, difference.imag);

    return 0;
}

