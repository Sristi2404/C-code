#include <stdio.h>

#define MAX 10  // Define a maximum size for matrices

int main() {
    int matrix[MAX][MAX], rows, cols;
    int zeroCount = 0;

    // Input the dimensions of the matrix
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Input the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Count the number of zero elements in the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    // A matrix is considered sparse if the number of zero elements is greater than half the total elements
    if (zeroCount > (rows * cols) / 2) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}

