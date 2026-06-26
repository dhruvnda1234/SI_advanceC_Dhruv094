//Calculate the ASCII value of character.
#include<stdio.h>
int main()
{
    char character;
    printf("To find ASCII value of a character :\n");
    printf("Enter a Character = ");
    if(scanf(" %c",&character)!=1)
    {
        return 1;
    }
    printf("\nASCII value of %c = %d",character,character);
    return 0;
}
