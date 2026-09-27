// Write a program that takes array of characters from user to find all the vowels.


#include <stdio.h>

int main()
{
    char arr[100];
    int n;

    printf("Enter number of characters: ");
    scanf("%d", &n);

    printf("Enter characters: ");

    for (int i = 0; i < n; i++)
        scanf(" %c", &arr[i]);

    printf("Vowels: ");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' ||
            arr[i] == 'o' || arr[i] == 'u' ||
            arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' ||
            arr[i] == 'O' || arr[i] == 'U')
        {
            printf("%c ", arr[i]);
        }
    }

    return 0;
}