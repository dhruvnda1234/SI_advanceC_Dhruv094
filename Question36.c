// Find the sum and average of array elements.
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
    int sum = 0;
    float average;
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element [%d]: ", i);
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("\nInvalid Input! Please enter integers only.\n");
            return 1;
        }
        sum += arr[i];
    }
    average = (float)sum / n;
    printf("\n--- Results ---");
    printf("\nSum of array elements     = %d", sum);
    printf("\nAverage of array elements = %.2f\n", average);
    return 0;
}
