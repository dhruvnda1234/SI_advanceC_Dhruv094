#include <stdio.h>

int main() {
    char str[] = "Hello World";
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    printf("Length: %d\n", length);
    return 0;
}
