#include <stdio.h>
#define MAX_SIZE 100
static int binary_search(const int a[], size_t n, int target) {
    size_t low = 0, high = n;
    while (low < high) {
        size_t mid = low + (high - low) / 2;
        if (a[mid] == target)
            return (int)mid;
        if (a[mid] < target)
            low = mid + 1;
        else
            high = mid;
    }
    return -1;
}
int main(void) {
    int a[MAX_SIZE], target;
    size_t n;
    puts("Enter values in ascending order.");
    printf("Array size (1-%d): ", MAX_SIZE);
    if (scanf("%zu", &n) != 1 || !n || n > MAX_SIZE)
        return 1;
    for (size_t i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1)
            return 1;
    printf("Value to find: ");
    if (scanf("%d", &target) != 1)
        return 1;
    int index = binary_search(a, n, target);
    if (index >= 0)
        printf("Found at index %d.\n", index);
    else
        puts("Value not found.");
    return 0;
}
