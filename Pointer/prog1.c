#include <stdio.h>

int main() {
    // Declare an integer variable
    int num = 10;

    // Declare a pointer that will hold the address of an integer
    int *ptr;

    // Initialize the pointer with the address of the variable num
    ptr = &num;

    // Print the value of num using the variable directly
    printf("Value of num (direct): %d\n", num);

    // Print the value of num using the pointer dereferencing
    printf("Value of num (using pointer): %d\n", *ptr);

    // Print the address of num using the pointer
    printf("Address of num (using pointer): %p\n", ptr);

    // Modify the value of num using the pointer
    *ptr = 20;

    // Print the modified value of num
    printf("Modified value of num (using pointer): %d\n", num);

    return 0;
}

