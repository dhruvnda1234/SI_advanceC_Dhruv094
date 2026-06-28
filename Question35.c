//Print a number pyramid (1, 12, 123, etc.).
#include <stdio.h>
int main()
{
    int row;
    printf("\nPrint number pyramid:");
    printf("\n No of Rows: ");

    if (scanf("%d", &row) != 1 || row <= 0)
    {
        printf("\nInvalid Input\n");
        return 1;
    }
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
