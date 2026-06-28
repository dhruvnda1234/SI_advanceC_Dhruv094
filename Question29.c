//Print a half-pyramid of stars (*). 
#include<stdio.h>
int main()
{
    int row;
    printf("\nPrint half pyramid of stars:");
    printf("\n No of Rows:");
    if(scanf("%d",&row)!=1||row<=0)
    {
        printf("\nInvalid Input");
        return 1;
    }
    for(int i=0;i<row;i++)
    {for(int j=0;j<=i;j++)
        {
          printf("*");
        }  
        printf("\n");
    }
    return 0;
}
