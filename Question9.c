//Check if a number is even or odd(using bitwise operator)
#include<stdio.h>
int main()
{
    int num;
    printf("To check if number is odd or even :\n");
    printf("Enter a Number = ");
    if(scanf("%d",&num)!=1)
    {
        printf("Invalid Value\n");
        return 1;
    }
    if((num & 1) == 0)
    {
        printf("%d is even.\n",num);
    }
    else
    {
        printf("%d is odd.\n",num);
    }
    return 0;
}
