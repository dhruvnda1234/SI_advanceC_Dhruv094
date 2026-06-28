#include <stdio.h>
int sumOfNaturalNumbers(int n) {
    if (n <= 0) return 0;
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int num = 10;
    printf("Sum of first %d natural numbers is %d\n", num, sumOfNaturalNumbers(num));
    return 0;
}
