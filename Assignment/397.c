/*
 * 397. Write a function to implement binary search.
 */

#include <stdio.h>

static int binarySearch(const int *a, int n, int key)
{
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == key) return mid;
        if (a[mid] < key) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

int main(void)
{
    int a[1000], n;
    printf("Enter size: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1) return 1;          /* the array must be sorted in ascending order */
    int key;
    printf("Enter element to search: ");
    if (scanf("%d", &key) != 1) return 1;
    int idx = binarySearch(a, n, key);
    if (idx >= 0) printf("Found at index %d\n", idx);
    else puts("Not found");
    return 0;
}
