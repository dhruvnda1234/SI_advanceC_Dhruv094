//Print Pascal's Triangle.
#include <stdio.h>
int main()
{
    int row;
    printf("\nPrint Pascal's Triangle:");
    printf("\n No of Rows: ");
    if (scanf("%d", &row) != 1 || row <= 0)
    {
        printf("\nInvalid Input\n");
        return 1;
    }
    for (int i = 0; i < row; i++)
    {
        for (int space = 1; space <= (row - i); space++)
        {
            printf(" ");
        }
        int val = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
