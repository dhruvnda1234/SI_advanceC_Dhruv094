#include <stdio.h>

int* searchElement(int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == target) {
            return (arr + i); // Return address of the found element
        }
    }
    return NULL; // Return NULL if element is not found
}

int main() {
    int arr[] = {12, 45, 78, 23, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
    
    int *result = searchElement(arr, size, target);
    
    if (result != NULL) {
        printf("Element %d found at index %ld (Address: %p)\n", target, result - arr, (void*)result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}
