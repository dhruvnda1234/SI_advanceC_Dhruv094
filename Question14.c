//Check if a year is a leap year.
#include <stdio.h>
int main() {
    int year;
    printf("\nTo check if given year is leap year or not:");
    printf("\nEnter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}
