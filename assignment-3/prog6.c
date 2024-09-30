#include <stdio.h>

int main() {
    int binary[32], n, i, decimal = 0;

    // Input the number of bits in the binary number
    printf("Enter the number of bits in the binary number: ");
    scanf("%d", &n);

    // Input the binary number (bit by bit)
    printf("Enter the binary number (bit by bit):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &binary[i]);
    }

    // Convert binary to decimal
    for (i = 0; i < n; i++) {
        decimal = decimal * 2 + binary[i];  // Shift the decimal result to the left and add the next bit
    }

    // Display the corresponding decimal number
    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}


