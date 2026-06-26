//Calculate the area and circumference of a circle.
#include<stdio.h>
#define PI 3.14159f
int main()
{
   float radius,area,circumference;
   printf("\nArea and Circumference of Circle :");
   printf("\nRadius of Circle = ");
   if(scanf("%f",&radius)!=1||radius<=0)
   {
    printf("Invalid Value\n");
    return 1;
   }
   area=PI*radius*radius;
   circumference=2.0*PI*radius;
   printf("Area of Circle = %.2f\n",area);
   printf("Circumference of Circle = %.2f\n",circumference);
return 0;
}
