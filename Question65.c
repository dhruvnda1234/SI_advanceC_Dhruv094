#include <stdio.h>
#include <math.h>
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    return (sum == n);
}

int isPerfect(int n) {
    if (n <= 1) return 0;
    int sum = 1; 
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) sum += i;
    }
    return (sum == n);
}

int main() {
    int num = 371; 
    printf("%d is Prime: %s\n", num, isPrime(num) ? "Yes" : "No");
    printf("%d is Armstrong: %s\n", num, isArmstrong(num) ? "Yes" : "No");
    printf("%d is Perfect: %s\n", num, isPerfect(num) ? "Yes" : "No");
    return 0;
}
