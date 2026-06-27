//Calculate the sum of digits of a number.
#include <stdio.h>
int main() {
    int n, original, remainder, sum = 0;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input.\n");
        return 0;
    }
    original = n;
    if (n < 0)
    {
        n = -n;
    }
    while (n > 0)
    {
        remainder = n % 10; 
        sum += remainder;   
        n /= 10;           
    }
    printf("The sum of digits of %d is: %d\n", original, sum);
    return 0;
}
