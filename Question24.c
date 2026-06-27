//Check if a number is an Armstrong number (e.g., 153).
#include <stdio.h>
int main()
{
    int n, originalNum, remainder, digits = 0, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalNum = n;
    while (originalNum != 0)
    {
        originalNum /= 10;
        digits++;
    }
    originalNum = n;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        int power = 1;
        for (int i = 0; i < digits; i++)
        {
            power *= remainder;
        }
        result += power;
        originalNum /= 10;
    }
    if (result == n)
    {
        printf("%d is an Armstrong number.\n", n);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}
