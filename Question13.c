//Find largest of three numbers.
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("\n To find greatest of three number :");
    printf("\nEnter First number =");
    if(scanf("%f",&a)!=1) return 0;
    printf("\nEnter second number =");
    if(scanf("%f",&b)!=1) return 0;
    printf("\nEnter third number =");
    if(scanf("%f",&c)!=1) return 0;
    if(a>b)
    {
        if(a>c)
        {
            printf("Greatest = %f",a);
        }
        else
        printf("Greatest = %f",c);
    }
    else 
    {
        if(b>c)
        {
            printf("Greatest = %f",b);
        }
        else
        printf("Greatest = %f",c);
    }
    return 0;
}
