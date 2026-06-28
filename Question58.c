#include <stdio.h>

int main() {
    char str[] = "Reverse";
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed: %s\n", str);
    return 0;
}
