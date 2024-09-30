#include <stdio.h>

#define MAX 10  // Define a maximum size for matrices

int main() {
    int matrix[MAX][MAX], size;
    int isIdentity = 1; // Assume it is an identity matrix initially

    // Input the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    // Input the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is an identity matrix
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                // Check for diagonal elements
                if (matrix[i][j] != 1) {
                    isIdentity = 0; // Not an identity matrix
                }
            } else {
                // Check for non-diagonal elements
                if (matrix[i][j] != 0) {
                    isIdentity = 0; // Not an identity matrix
                }
            }
        }
    }

    // Display the result
    if (isIdentity) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}

