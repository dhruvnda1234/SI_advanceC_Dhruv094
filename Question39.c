//Insert an element at a specific position in an array.
#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter current number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("\nInvalid array size!\n");
        return 1;
    }
    int arr[n + 1];
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
    int element, position;
    printf("\nEnter the element to insert: ");
    if (scanf("%d", &element) != 1)
    {
        printf("\nInvalid Element!\n");
        return 1;
    }
    printf("Enter the position (0 to %d) where you want to insert: ", n);
    if (scanf("%d", &position) != 1 || position < 0 || position > n)
    {
        printf("\nInvalid position! Position must be between 0 and %d.\n", n);
        return 1;
    }
    for (int i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    n++;
    printf("\n--- Array After Insertion --- \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");    
    return 0;
}
