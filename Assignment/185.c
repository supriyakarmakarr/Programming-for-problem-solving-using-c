/*Write a program that takes array of decimal numbers from user to find mean of all
elements in the array.*/



#include <stdio.h>

int main()
{
    float arr[100], sum = 0, mean;
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        sum = sum + arr[i];
    }

    mean = sum / n;

    printf("Mean = %.2f", mean);

    return 0;
}