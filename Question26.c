//Reverse a given integer.
#include <stdio.h>
int main()
{
    int n, original, remainder;
    long long reversed = 0;
    printf("Enter an integer: ");
   if(scanf("%d", &n)!=1||n<0) return 0;
    original = n;
    while (n > 0)
    {
        remainder = n % 10;                 
        reversed = reversed * 10 + remainder;
        n /= 10;                             
    }
    printf("Original number = %d\n", original);
    printf("Reversed number = %lld\n", reversed);
    return 0;
}
