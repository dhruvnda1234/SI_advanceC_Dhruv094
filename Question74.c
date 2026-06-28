#include <stdio.h>

int main() {
    int num1 = 15, num2 = 25, sum;
    int *p1 = &num1;
    int *p2 = &num2;
    
    sum = *p1 + *p2;
    printf("Sum of %d and %d is %d\n", *p1, *p2, sum);
    
    return 0;
}
