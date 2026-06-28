#include <stdio.h>
double power(double base, int exp) {
    if (exp == 0) return 1;
    if (exp < 0) return 1 / power(base, -exp);
    return base * power(base, exp - 1);
}

int main() {
    double base = 2.0;
    int exp = -3;
    printf("%.2f raised to the power %d is %.5f\n", base, exp, power(base, exp));
    return 0;
}
