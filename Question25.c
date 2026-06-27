//Check if a number is a Strong number (sum of factorial of digits = number).
#include <stdio.h>
int main()
{
    int n, originalNum, remainder, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalNum = n;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        int factorial = 1;
        for (int i = 1; i <= remainder; i++)
        {
            factorial *= i;
        }
        sum += factorial;        
        originalNum /= 10;   
    }
    if (sum == n)
    {
        printf("%d is a Strong number.\n", n);
    }
    else
    {
        printf("%d is not a Strong number.\n", n);
    }
    return 0;
}
