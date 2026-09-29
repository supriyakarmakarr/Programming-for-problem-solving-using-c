/* Write a program to search a sorted array using binary search. */
#include <stdio.h>

int main(void) {
    int a[100], n, key, l = 0, r, mid, pos = -1, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d sorted integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter value to search: ");
    scanf("%d", &key);
    /* Binary search repeatedly halves the sorted part still being searched. */
    r = n - 1;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (a[mid] == key) {
            pos = mid;
            break;
        }
        if (a[mid] < key)
            l = mid + 1;
        else
            r = mid - 1;
    }
    if (pos < 0)
        printf("Value not found.\n");
    else
        printf("Found at position %d.\n", pos + 1);
    return 0;
}
