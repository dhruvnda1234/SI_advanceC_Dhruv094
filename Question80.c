#include <stdio.h>

#define ROWS 2
#define COLS 3

void addMatrices(int *mat1, int *mat2, int *res, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Flatten 2D index logic: (i * cols + j)
            *(res + (i * cols + j)) = *(mat1 + (i * cols + j)) + *(mat2 + (i * cols + j));
        }
    }
}

void printMatrix(int *mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(mat + (i * cols + j)));
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[ROWS][COLS] = {{7, 8, 9}, {1, 2, 3}};
    int result[ROWS][COLS];

    // Pass the base addresses by casting to a single pointer type
    addMatrices((int *)matrix1, (int *)matrix2, (int *)result, ROWS, COLS);

    printf("Resultant Matrix:\n");
    printMatrix((int *)result, ROWS, COLS);

    return 0;
}
