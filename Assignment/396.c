/*
 * 396. Write a function to implement linear search.
 */

#include <stdio.h>

static int linearSearch(const int *a, int n, int key)
{
    for (int i = 0; i < n; i++)
        if (a[i] == key) return i;
    return -1;
}

int main(void)
{
    int a[1000], n;
    printf("Enter size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1) return 1;
    int key;
    printf("Enter element to search: ");
    if (scanf("%d", &key) != 1) return 1;
    int idx = linearSearch(a, n, key);
    if (idx >= 0) printf("Found at index %d\n", idx);
    else puts("Not found");
    return 0;
}
