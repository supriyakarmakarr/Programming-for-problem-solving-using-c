// Write a program that takes array of input from user & print it in reverse order.



#include <stdio.h>

int main()
{
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array in reverse order: ");

    for (int i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}