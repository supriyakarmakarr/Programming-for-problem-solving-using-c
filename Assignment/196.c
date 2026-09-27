// Write a program to insert a value in a given index of an array.



#include <stdio.h>

int main()
{
    int arr[100], n, index, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index: ");
    scanf("%d", &index);

    printf("Enter value: ");
    scanf("%d", &value);

    for (int i = n; i > index; i--)
        arr[i] = arr[i - 1];

    arr[index] = value;
    n++;

    printf("Array after insertion: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}