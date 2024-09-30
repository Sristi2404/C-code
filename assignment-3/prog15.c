#include <stdio.h>

#define MAX 10  // Define a maximum size for matrices

void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows1, int cols1, int rows2, int cols2) {
    // Initialize the result matrix to 0
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
    int rows1, cols1, rows2, cols2;

    // Input dimensions for the first matrix
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    // Input the first matrix
    inputMatrix(matrix1, rows1, cols1);

    // Input dimensions for the second matrix
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if multiplication is possible
    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible. The number of columns in the first matrix must equal the number of rows in the second matrix.\n");
        return 1;
    }

    // Input the second matrix
    inputMatrix(matrix2, rows2, cols2);

    // Multiply the matrices
    multiplyMatrices(matrix1, matrix2, result, rows1, cols1, rows2, cols2);

    // Display the first matrix
    printf("Matrix 1:\n");
    displayMatrix(matrix1, rows1, cols1);

    // Display the second matrix
    printf("Matrix 2:\n");
    displayMatrix(matrix2, rows2, cols2);

    // Display the result of the multiplication
    printf("Result of Matrix Multiplication:\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}

