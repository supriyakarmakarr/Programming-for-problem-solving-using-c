/* Write a program to search an array using linear search. */
#include <stdio.h>

int main(void) {
    int a[100], n, key, i, pos = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter value to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
        if (a[i] == key) {
            pos = i;
            break;
        }
    if (pos < 0)
        printf("Value not found.\n");
    else
        printf("Found at position %d.\n", pos + 1);
    return 0;
}
