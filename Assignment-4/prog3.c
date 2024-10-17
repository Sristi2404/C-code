/*Write a C program to print the contents of a file.*/
#include <stdio.h>
#include <stdlib.h>  // For exit()

void printFileContents(const char *filename) {
    FILE *file = fopen(filename, "r");  // Open the file in read mode

    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        exit(1);  // Exit if the file cannot be opened
    }

    char ch;

    printf("Contents of %s:\n", filename);
    // Read and print the file character by character
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // Print each character to the console
    }

    fclose(file);  // Close the file
}

int main() {
    char filename[100];

    // Ask the user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Call the function to print the contents of the file
    printFileContents(filename);

    return 0;
}

