/* Write a program to sort characters in alphabetical order. */
#include <stdio.h>

int main(void) {
    char a[100], temp;
    int n, i, j;
    printf("Enter number of characters: ");
    scanf("%d", &n);
    printf("Enter %d characters (no spaces): ", n);
    for (i = 0; i < n; i++)
        scanf(" %c", &a[i]);
    /* Bubble larger characters toward the end until the array is sorted. */
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    printf("Characters in alphabetical order: ");
    for (i = 0; i < n; i++)
        printf("%c ", a[i]);
    return 0;
}
