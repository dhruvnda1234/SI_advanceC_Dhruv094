//Print a diamond shape of stars (*). 
#include <stdio.h>
int main()
{
    int row;
    printf("\nPrint diamond of stars:");
    printf("\n No of Rows (for half diamond): ");
    if (scanf("%d", &row) != 1 || row <= 0)
    {
        printf("\nInvalid Input\n");
        return 1;
    }
    for (int i = 1; i <= row; i++)
    {
        for (int space = 1; space <= (row - i); space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = row - 1; i >= 1; i--)
    {
        for (int space = 1; space <= (row - i); space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
