/*Write a C program to count the number of lines in a file.*/
#include <stdio.h>
#include <stdlib.h>  // For exit()

int countLines(const char *filename) {
    FILE *file = fopen(filename, "r");  // Open the file in read mode
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        exit(1);  // Exit if the file cannot be opened
    }

    int lines = 0;
    char ch;

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;  // Increment line count on encountering a newline
        }
    }

    fclose(file);  // Close the file
    return lines;
}

int main() {
    char filename[100];

    // Ask the user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Call the function and print the result
    int lines = countLines(filename);
    printf("The file %s has %d lines.\n", filename, lines);

    return 0;
}

