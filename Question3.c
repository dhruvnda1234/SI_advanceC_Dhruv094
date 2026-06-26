//WAP to swap two numbers using a temporary variable
#include<stdio.h>
int main()
{
    float num1,num2,temp;
    printf("\nSwapping numbers witha temporary variable :");
    printf("\nFirst Number = ");
    if(scanf("%f",&num1)!=1)
    {
        printf("\nInvalid Value");
        return 1;
    }
    printf("\nSecond Number = ");
    if(scanf("%f",&num2)!=1)
    {
        printf("\nInvalid Value");
        return 1;
    }
    temp=num1;
    num1=num2;
    num2=temp;
    printf("\nSWAPPED NUMBER :");
    printf("\nFirst Number = %.2f",num1);
    printf("\nSecond Number = %.2f",num2);
    return 0;
}
