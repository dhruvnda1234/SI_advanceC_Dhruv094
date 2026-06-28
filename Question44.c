#include <stdio.h>

int main() {
    int arr[] = {12, 34, 54, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 54;
    int foundIndex = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Element found at index %d", foundIndex);
    } else {
        printf("Element not found");
    }

    return 0;
}
