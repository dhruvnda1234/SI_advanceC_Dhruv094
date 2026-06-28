#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {10, 20, 30, 40, 50};

    swapArrays(a, b, 5);

    printf("Array A after swap: ");
    for (int i = 0; i < 5; i++) printf("%d ", a[i]);
    
    printf("\nArray B after swap: ");
    for (int i = 0; i < 5; i++) printf("%d ", b[i]);
    printf("\n");

    return 0;
}
