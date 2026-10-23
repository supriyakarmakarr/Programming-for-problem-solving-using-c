#include <stdio.h>
#define MAX_SIZE 100
static void find_min_max(const int a[], size_t n, int *minimum, int *maximum) {
    *minimum = *maximum = a[0];
    for (size_t i = 1; i < n; i++) {
        if (a[i] < *minimum)
            *minimum = a[i];
        if (a[i] > *maximum)
            *maximum = a[i];
    }
}
int main(void) {
    int a[MAX_SIZE], min, max;
    size_t n;
    printf("Array size (1-%d): ", MAX_SIZE);
    if (scanf("%zu", &n) != 1 || !n || n > MAX_SIZE) {
        puts("Invalid size.");
        return 1;
    }
    printf("Enter %zu integers: ", n);
    for (size_t i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1) {
            puts("Invalid input.");
            return 1;
        }
    find_min_max(a, n, &min, &max);
    printf("Smallest: %d\nLargest: %d\n", min, max);
    return 0;
}
