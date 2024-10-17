/*Write a C program to copy the contents of one file to another file.*/
#include <stdio.h>
#include <stdlib.h>  // For exit()

void copyFile(const char *sourceFile, const char *destinationFile) {
    FILE *source = fopen(sourceFile, "r");  // Open source file in read mode
    if (source == NULL) {
        printf("Could not open source file %s\n", sourceFile);
        exit(1);  // Exit if the source file cannot be opened
    }

    FILE *destination = fopen(destinationFile, "w");  // Open destination file in write mode
    if (destination == NULL) {
        printf("Could not open destination file %s\n", destinationFile);
        fclose(source);  // Close the source file before exiting
        exit(1);
    }

    char ch;

    // Copy content from source to destination, character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully from %s to %s\n", sourceFile, destinationFile);

    fclose(source);       // Close the source file
    fclose(destination);  // Close the destination file
}

int main() {
    char sourceFile[100], destinationFile[100];

    // Ask the user for the source and destination filenames
    printf("Enter the source file name: ");
    scanf("%s", sourceFile);
    printf("Enter the destination file name: ");
    scanf("%s", destinationFile);

    // Call the function to copy the contents
    copyFile(sourceFile, destinationFile);

    return 0;
}

