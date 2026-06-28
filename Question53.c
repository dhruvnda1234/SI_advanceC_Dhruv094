#include <stdio.h>

int main() {
    int mat1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int isEqual = 1;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                isEqual = 0;
                break;
            }
        }
        if (!isEqual) {
            break;
        }
    }

    if (isEqual) {
        printf("Matrices are equal\n");
    } else {
        printf("Matrices are not equal\n");
    }

    return 0;
}
