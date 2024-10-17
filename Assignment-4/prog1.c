/*Write a C program to list all files and sub-directories in a directory.*/
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

// Function to list files and directories
void listFiles(const char *path) {
    struct dirent *entry;  // Directory entry structure
    DIR *dir = opendir(path);  // Open the directory

    if (dir == NULL) {
        // If the directory cannot be opened, print an error and exit
        printf("Could not open directory: %s\n", path);
        return;
    }

    printf("Contents of directory: %s\n", path);

    // Read entries in the directory
    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);  // Print the name of the file or sub-directory
    }

    closedir(dir);  // Close the directory
}

int main() {
    char path[100];

    // Ask the user to enter the directory path
    printf("Enter the directory path: ");
    scanf("%s", path);

    // List files and sub-directories
    listFiles(path);

    return 0;
}

