// Write a program to interchange largest and smallest number in an array.



#include <stdio.h>

int main()
{
    int arr[100], n, max, min, maxIndex, minIndex, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = min = arr[0];
    maxIndex = minIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }

        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
    }

    temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    printf("Array after interchange: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}