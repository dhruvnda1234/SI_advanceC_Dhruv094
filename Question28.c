//Find the GCD (HCF) and LCM of two numbers.
#include <stdio.h>
int main() {
    int n1, n2, a, b, temp, gcd;
    long long lcm;
    printf("Enter two integers: ");
    if (scanf("%d %d", &n1, &n2) != 2) {
        printf("Invalid input.\n");
        return 0;
    }
    a = n1;
    b = n2;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    if (gcd == 0) {
        lcm = 0; 
    } else {
        lcm = ((long long)n1 * n2) / gcd;
        if (lcm < 0) lcm = -lcm; 
    }
    printf("GCD (HCF) of %d and %d = %d\n", n1, n2, gcd);
    printf("LCM of %d and %d = %lld\n", n1, n2, lcm);
    return 0;
}
