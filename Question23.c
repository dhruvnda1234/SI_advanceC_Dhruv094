//Check if a number is a Palindrome (e.g., 121).
#include <stdio.h>
int main() {
    int n, original, remainder;
    unsigned long long reversed = 0; 
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;
    while (n > 0)
    {
        remainder = n % 10;          
        reversed = reversed * 10 + remainder; 
        n /= 10;                   
    }
    if (original == reversed)
    {
        printf("%d is a palindrome number.\n", original);
    }
    else
    {
        printf("%d is not a palindrome number.\n", original);
    }
    return 0;
}
