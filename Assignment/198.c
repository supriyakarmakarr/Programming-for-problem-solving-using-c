/*Write a program to delete a value from an array. If the value is not present in the array,
it won’t modify the existing array.*/




#include <stdio.h>

int main()
{
    int arr[100], n, value, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to delete: ");
    scanf("%d", &value);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        for (int i = index; i < n - 1; i++)
            arr[i] = arr[i + 1];

        n--;

        printf("Array after deletion: ");

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
    }
    else
    {
        printf("Value not found. Array remains unchanged.");
    }

    return 0;
}