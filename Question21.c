//Check if a number is a Prime number.
#include <stdio.h>
int main() {
    int n, i;
    int Prime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        Prime = 0;
    } 
    else
    {
        for (i = 2;i <= n/2; ++i)
        {
            if (n % i == 0)
            {
                Prime = 0; 
                break;
            }
        }
    }
    if (Prime == 1)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}
