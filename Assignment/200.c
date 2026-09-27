// Write a program that takes n digits from user and arrange them in descending order.




#include <stdio.h>

int main()
{
    int arr[100], n, temp;

    printf("Enter number of digits: ");
    scanf("%d", &n);

    printf("Enter digits: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Digits in descending order: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
