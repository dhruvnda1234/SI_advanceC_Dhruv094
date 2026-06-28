#include <stdio.h>
int main() {
    char lowerStr[] = "dhruv";
    char upperStr[] = "YADAV";

    for (int i = 0; lowerStr[i] != '\0'; i++) {
        if (lowerStr[i] >= 'a' && lowerStr[i] <= 'z') {
            lowerStr[i] = lowerStr[i] - 32;
        }
    }

    for (int i = 0; upperStr[i] != '\0'; i++) {
        if (upperStr[i] >= 'A' && upperStr[i] <= 'Z') {
            upperStr[i] = upperStr[i] + 32;
        }
    }

    printf("To Uppercase: %s\n", lowerStr);
    printf("To Lowercase: %s\n", upperStr);
    return 0;
}
