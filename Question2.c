//Read an integer/float/character and print it.
#include<stdio.h>
int main()
{
    int integer_num;
    float float_num;
    char character;
    printf("\nEnter a integer value = ");
    scanf("%d",&integer_num);
    printf("\nEnter a float value = ");
    scanf("%f",&float_num);
    printf("\nEnter a character value = ");
    scanf(" %c",&character);
    printf("\nENTERED VALUE:");
    printf("\nInterger = %d",integer_num);
    printf("\nFloat = %f",float_num);
    printf("\nCharacter = %c",character);
    return 0;
}
/* Learnt
-That \n before a char scanf can detect the newline and take that as the character*/
