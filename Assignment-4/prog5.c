/*Write a C program to merge the contents of two files into a third file.*/
#include <stdio.h>
#include <stdlib.h>  // For exit()

void mergeFiles(const char *file1, const char *file2, const char *outputFile) {
    FILE *f1 = fopen(file1, "r");  // Open the first file in read mode
    FILE *f2 = fopen(file2, "r");  // Open the second file in read mode
    FILE *out = fopen(outputFile, "w");  // Open the output file in write mode

    if (f1 == NULL || f2 == NULL || out == NULL) {
        printf("Error opening files.\n");
        exit(1);  // Exit if any file cannot be opened
    }

    char ch;

    // Copy contents of the first file to the output file
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, out);
    }

    // Copy contents of the second file to the output file
    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, out);
    }

    printf("Files %s and %s merged into %s successfully.\n", file1, file2, outputFile);

    fclose(f1);  // Close the first file
    fclose(f2);  // Close the second file
    fclose(out);  // Close the output file
}

int main() {
    char file1[100], file2[100], outputFile[100];

    // Get the filenames from the user
    printf("Enter the first file name: ");
    scanf("%s", file1);
    printf("Enter the second file name: ");
    scanf("%s", file2);
    printf("Enter the output file name: ");
    scanf("%s", outputFile);

    // Merge the two files into the output file
    mergeFiles(file1, file2, outputFile);

    return 0;
}

