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

void transposeMatrix(int matrix[MAX][MAX], int transposed[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];  // Swap rows and columns
        }
    }
}

int main() {
    int matrix[MAX][MAX], transposed[MAX][MAX];
    int rows, cols;

    // Input the dimensions of the matrix
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Input the original matrix
    inputMatrix(matrix, rows, cols);

    // Transpose the matrix
    transposeMatrix(matrix, transposed, rows, cols);

    // Display the original matrix
    printf("Original Matrix:\n");
    displayMatrix(matrix, rows, cols);

    // Display the transposed matrix
    printf("Transposed Matrix:\n");
    displayMatrix(transposed, cols, rows);

    return 0;
}

