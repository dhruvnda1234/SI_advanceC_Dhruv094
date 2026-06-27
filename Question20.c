//Generate the Fibonacci sequence up to N terms.
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error: Please enter a positive integer greater than 0.\n");
        return 0;
    }
    printf("Fibonacci Sequence up to %d terms: ", n);
    for (i = 1; i <= n; ++i) {
        printf("%llu\t", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
