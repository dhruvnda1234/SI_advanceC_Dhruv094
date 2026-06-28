//Print a full pyramid (triangle).
#include<stdio.h>
int main()
{
    int row;
    printf("\nPrint pyramid of stars:");
    printf("\n No of Rows:");
    if(scanf("%d",&row)!=1||row<=0)
    {
        printf("\nInvalid Input");
        return 1;
    }
    for(int i=1;i<=row;i++)
    {
        for(int space=1;space<=(row-i);space++)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++)
        {
          printf("*");
        }  
        printf("\n");
    }
    return 0;
}
