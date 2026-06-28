#include <stdio.h>

int main() {
    int source[5] = {10, 20, 30, 40, 50};
    int dest[5];
    
    int *src_ptr = source;
    int *dest_ptr = dest;

    for (int i = 0; i < 5; i++) {
        *(dest_ptr + i) = *(src_ptr + i);
    }

    printf("Destination array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(dest_ptr + i));
    }
    printf("\n");

    return 0;
}
