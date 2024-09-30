#include <stdio.h>

int main() {
    int decimal, binary[32], index = 0, i;

    // Input the decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Edge case: if decimal is 0
    if (decimal == 0) {
        binary[index++] = 0;
    } else {
        // Convert the decimal number to binary
        while (decimal > 0) {
            binary[index++] = decimal % 2; // Store the remainder (binary digit)
            decimal = decimal / 2;         // Update the decimal number
        }
    }

    // Display the binary number (stored in reverse order)
    printf("Binary representation: ");
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}

