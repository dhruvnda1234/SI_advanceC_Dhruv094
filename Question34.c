//Print Floyd’s Triangle. 
#include <stdio.h>
int main()
{
    int row;
    printf("\nPrint Floyd's Triangle:");
    printf("\n No of Rows: ");
    if (scanf("%d", &row) != 1 || row <= 0)
    {
        printf("\nInvalid Input\n");
        return 1;
    }
    int num = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++; 
        }
        printf("\n");
    }
    return 0;
}
