// Convert days into years, weeks, and days
#include <stdio.h>
int main() 
{
    int daysgiven,years, weeks, days;
    printf("Convert Days into Years, Weeks, and Days\n");
    printf("Enter total number of days: ");
    if (scanf("%d", &daysgiven) != 1 || daysgiven < 0) 
    {
        printf("Invalid Value\n");
        return 1;
    }
    years = daysgiven / 365;
    weeks = (daysgiven % 365) / 7;
    days = (daysgiven % 365) % 7;
    printf("%d days = %d Year %d Week and %d Day\n",daysgiven, years, weeks, days);
    return 0;
}
