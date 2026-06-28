//Delete an element from a specific position.
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
    int position;
    printf("Enter the position (0 to %d) of the element to delete: ", n - 1);
    if (scanf("%d", &position) != 1 || position < 0 || position >= n)
    {
        printf("\nInvalid position!\n");
        return 1;
    }
    for (int i = position; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("\n--- Array After Deletion --- \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
