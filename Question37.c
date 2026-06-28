// Find the largest and smallest element in an array.
#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("\nInvalid array size!\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element [%d]: ", i);
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("\nInvalid Input! Please enter integers only.\n");
            return 1;
        }
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\n--- Results ---");
    printf("\nLargest element  = %d", max);
    printf("\nSmallest element = %d\n", min);    
    return 0;
}
