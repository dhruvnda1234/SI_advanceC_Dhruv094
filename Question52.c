#include <stdio.h>

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int principalDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < 3; i++) {
        principalDiagonalSum += mat[i][i];
        secondaryDiagonalSum += mat[i][3 - 1 - i];
    }

    printf("Principal Diagonal Sum: %d\n", principalDiagonalSum);
    printf("Secondary Diagonal Sum: %d\n", secondaryDiagonalSum);

    return 0;
}
