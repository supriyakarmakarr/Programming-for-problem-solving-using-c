// Write a program that takes n digits from user and print all possible combinations using
// them.



#include <stdio.h>

void permute(int arr[], int start, int n)
{
    int temp;

    if (start == n)
    {
        for (int i = 0; i < n; i++)
            printf("%d", arr[i]);

        printf("\n");
        return;
    }

    for (int i = start; i < n; i++)
    {
        temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;

        permute(arr, start + 1, n);

        temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[10], n;

    printf("Enter number of digits: ");
    scanf("%d", &n);

    printf("Enter digits: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("All possible combinations:\n");

    permute(arr, 0, n);

    return 0;
}