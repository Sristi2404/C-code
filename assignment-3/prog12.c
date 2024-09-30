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

void addMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

int main() {
    int matrix1[MAX][MAX], matrix2[MAX][MAX], sum[MAX][MAX], difference[MAX][MAX];
    int rows, cols;

    // Input the dimensions of the matrices
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    // Input the first matrix
    printf("Matrix 1:\n");
    inputMatrix(matrix1, rows, cols);

    // Input the second matrix
    printf("Matrix 2:\n");
    inputMatrix(matrix2, rows, cols);

    // Adding the matrices
    addMatrices(matrix1, matrix2, sum, rows, cols);
    
    // Subtracting the matrices
    subtractMatrices(matrix1, matrix2, difference, rows, cols);

    // Display the results
    printf("Sum of the matrices:\n");
    displayMatrix(sum, rows, cols);

    printf("Difference of the matrices:\n");
    displayMatrix(difference, rows, cols);

    return 0;
}

