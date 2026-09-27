// Write a program that takes array of integers from user to find the sum of all elements
// in the array.

#include <stdio.h>

int main()
{
    int arr[100], n, sum = 0;
    printf("Enter no of element : ");
    scanf("%d", &n);
    printf("Enter array element : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum = %d", sum);

    return 0;
}