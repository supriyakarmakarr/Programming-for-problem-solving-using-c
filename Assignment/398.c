#include <stdio.h>
#define MAX_SIZE 100
static int recursive_binary_search(const int a[], int low, int high, int target) {
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (a[mid] == target)
        return mid;
    return a[mid] < target ? recursive_binary_search(a, mid + 1, high, target)
                           : recursive_binary_search(a, low, mid - 1, target);
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
    int index = recursive_binary_search(a, 0, (int)n - 1, target);
    if (index >= 0)
        printf("Found at index %d.\n", index);
    else
        puts("Value not found.");
    return 0;
}
