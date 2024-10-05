#include <stdio.h>

#define ROWS 3  // Define number of rows
#define COLS 3  // Define number of columns

// Function to add two matrices
void addMatrices(int *mat1, int *mat2, int *result, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            *(result + i * cols + j) = *(mat1 + i * cols + j) + *(mat2 + i * cols + j);
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int *mat1, int *mat2, int *result, int rows, int cols) {
    int i, j, k;
    // Initialize the result matrix to 0
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            *(result + i * cols + j) = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            for (k = 0; k < cols; k++) {
                *(result + i * cols + j) += (*(mat1 + i * cols + k)) * (*(mat2 + k * cols + j));
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int *mat, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", *(mat + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int mat1[ROWS][COLS], mat2[ROWS][COLS], result[ROWS][COLS];
    int i, j;

    // Input elements for the first matrix
    printf("Enter elements for the first matrix (3x3):\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements for the second matrix (3x3):\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Matrix addition
    addMatrices(&mat1[0][0], &mat2[0][0], &result[0][0], ROWS, COLS);
    printf("\nMatrix after addition:\n");
    displayMatrix(&result[0][0], ROWS, COLS);

    // Matrix multiplication
    multiplyMatrices(&mat1[0][0], &mat2[0][0], &result[0][0], ROWS, COLS);
    printf("\nMatrix after multiplication:\n");
    displayMatrix(&result[0][0], ROWS, COLS);

    return 0;
}

