// Write a program to check whether a value exists in an array.




#include <stdio.h>

int main()
{
    int arr[100], n, value, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to search: ");
    scanf("%d", &value);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Value exists in the array.");
    else
        printf("Value does not exist in the array.");

    return 0;
}