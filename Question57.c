#include <stdio.h>

int main() {
    char str1[] = "apple";
    char str2[] = "apple";
    int i = 0;
    int isEqual = 1;

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            isEqual = 0;
            break;
        }
        i++;
    }

    if (isEqual) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
    return 0;
}
