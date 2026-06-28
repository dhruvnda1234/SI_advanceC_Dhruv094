#include <stdio.h>
int main() {
    char str[100] = "P@r0gr3am!mi$ng";
    int index = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0';

    printf("Result: %s\n", str);
    return 0;
}
