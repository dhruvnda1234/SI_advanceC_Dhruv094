#include <stdio.h>
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2; 

    k1 = k1 % size1;

    for (int i = 0; i < k1; i++) {
        int temp = arr1[0];
        for (int j = 0; j < size1 - 1; j++) {
            arr1[j] = arr1[j + 1];
        }
        arr1[size1 - 1] = temp;
    }

    printf("Left: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    int arr2[] = {1, 2, 3, 4, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 2; 

    k2 = k2 % size2;

    for (int i = 0; i < k2; i++) {
        int temp = arr2[size2 - 1];
        for (int j = size2 - 1; j > 0; j--) {
            arr2[j] = arr2[j - 1];
        }
        arr2[0] = temp;
    }

    printf("Right: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
