/*Write a program that takes array of integers from user to check whether it has a
duplicate number.*/


#include <stdio.h>

int main()
{
    int arr[100], n, duplicate = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }

        if (duplicate)
            break;
    }

    if (duplicate)
        printf("Array has duplicate number.");
    else
        printf("Array has no duplicate number.");

    return 0;
}