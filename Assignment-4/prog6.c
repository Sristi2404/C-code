/*Write a C program to delete a file.*/
#include <stdio.h>
#include <stdlib.h>  // For exit()

int main() {
    char filename[100];

    // Ask the user for the filename to delete
    printf("Enter the name of the file to delete: ");
    scanf("%s", filename);

    // Try to delete the file using remove()
    if (remove(filename) == 0) {
        printf("File '%s' deleted successfully.\n", filename);
    } else {
        perror("Error deleting the file");  // Print error message if deletion fails
        exit(1);  // Exit with failure status
    }

    return 0;
}

