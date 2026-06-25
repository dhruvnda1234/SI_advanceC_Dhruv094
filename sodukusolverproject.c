//           SODUKU SOLVER
#include <stdio.h>
int issafe(int grid[9][9],int row, int col,int digit)
{
    for(int i=0;i<9;i++)
    {
        if(grid[row][i]==digit)
        {
            return 0;
        }
    }
    for(int i=0;i<9;i++)
    {
        if(grid[i][col]==digit)
        {
            return 0;
        }
    }
    int rowstart=row-row%3;
    int colstart=col-col%3;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(grid[rowstart+i][colstart+j]==digit)
            {
                return 0;
            }
        }
    }
    return 1;
}

int sudokusolver(int grid[9][9],int row, int col)
{
     if(col==9)
    {
        row=row+1;
        col=0;
    }
    if(row==9)
    {
        return 1;
    }
    if(grid[row][col]>0)
    {
        return sudokusolver(grid,row,col+1);
    }
    for(int digit=1;digit<10;digit++)
    {
        if(issafe(grid,row,col,digit))
        {
            grid[row][col]=digit;
            if(sudokusolver(grid,row,col+1))
            {return 1;}
         grid[row][col]=0;
        }
    }
    return 0;
}
int main() {
    int grid[9][9],row,col;
    printf("SODUKU SOLVER:\n");
    printf("Enter the soduku (for spaces use 0) = \n");
    for(row=0;row<9;row++)
    {
        for(col=0;col<9;col++)
        {
            if(scanf("%d",&grid[row][col])!=1||grid[row][col]<0||grid[row][col]>9)
            {
                return 1;
            }
        }
    }
    if(sudokusolver(grid,0,0))
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                printf("|%d",grid[i][j]);
            }
            printf("|");
            printf("\n");
        }
    }
    return 0;
}
