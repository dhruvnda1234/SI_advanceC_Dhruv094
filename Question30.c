//Print an inverted half-pyramid. 
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
    for(int i=row;i>0;i--)
    {for(int j=0;j<i;j++)
        {
          printf("*");
        }  
        printf("\n");
    }
    return 0;
}
