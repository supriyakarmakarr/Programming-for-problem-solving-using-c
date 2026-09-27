// Write a program to delete an element in a given index from an array.


#include <stdio.h>

int main()
{
    int arr[100], n, index;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index to delete: ");
    scanf("%d", &index);

    for (int i = index; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    printf("Array after deletion: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}