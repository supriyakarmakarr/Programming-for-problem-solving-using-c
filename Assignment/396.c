#include <stdio.h>
#define MAX_SIZE 100
static int linear_search(const int a[], size_t n, int target) {
    for (size_t i = 0; i < n; i++)
        if (a[i] == target)
            return (int)i;
    return -1;
}
int main(void) {
    int a[MAX_SIZE], target;
    size_t n;
    printf("Array size (1-%d): ", MAX_SIZE);
    if (scanf("%zu", &n) != 1 || !n || n > MAX_SIZE)
        return 1;
    printf("Enter %zu integers: ", n);
    for (size_t i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1)
            return 1;
    printf("Value to find: ");
    if (scanf("%d", &target) != 1)
        return 1;
    int index = linear_search(a, n, target);
    if (index >= 0)
        printf("Found at index %d.\n", index);
    else
        puts("Value not found.");
    return 0;
}
