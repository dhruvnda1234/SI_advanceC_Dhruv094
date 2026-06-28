// Reverse an array in place (without a second array).
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
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("\n--- Reversed Array --- \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
