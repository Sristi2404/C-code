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
void sumRowsAndColumns(int matrix[MAX][MAX], int rows, int cols, int rowSums[MAX], int colSums[MAX]) {
    // Initialize sums
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0;  // Initialize row sums to 0
    }
    for (int j = 0; j < cols; j++) {
        colSums[j] = 0;  // Initialize column sums to 0
    }

    // Calculate sums
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];  // Sum each row
            colSums[j] += matrix[i][j];  // Sum each column
        }
    }
}

int main() {
    int matrix[MAX][MAX], rowSums[MAX], colSums[MAX];
    int rows, cols;

    // Input the dimensions of the matrix
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Input the matrix
    inputMatrix(matrix, rows, cols);

    // Calculate row and column sums
    sumRowsAndColumns(matrix, rows, cols, rowSums, colSums);

    // Display the original matrix
    displayMatrix(matrix, rows, cols);

    // Display the sums of each row
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }

    // Display the sums of each column
    printf("Sum of each column:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j + 1, colSums[j]);
    }

    return 0;
}

