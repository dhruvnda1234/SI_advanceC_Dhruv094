//Convert temperature from Celcius to Fahrenheit and vice versa.
#include<stdio.h>
int main()
{
    float temp;
    char unit;
    printf("\n Converting temperature from Celcius to Fahrenheit and vice versa :");
    printf("\n Temperature = ");
    if(scanf("%f",&temp)!=1)
    {
        printf("\nInvalid Value");
        return 1;
    }
    printf("\nTemperature Unit (Celcius=C,Fahrenheit=F) = ");
    scanf(" %c",&unit);
    if(unit=='C')
    {
        temp=(temp*(9.0/5.0))+32;
        printf("Fahrenheit = %.2f F",temp);
    }
    else if(unit=='F')
    {
        temp=(temp-32.0)*(5.0/9.0);
        printf("Celcius = %.2f C",temp);
    }
    else
    {
        printf("\nInvalid Unit");
    }
return 0;
} 
