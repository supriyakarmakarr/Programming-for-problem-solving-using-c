#include <stdio.h>
#define MAX_SIZE 100
static long long array_sum(const int values[], size_t count) {
    long long sum = 0;
    for (size_t i = 0; i < count; i++)
        sum += values[i];
    return sum;
}
int main(void) {
    int a[MAX_SIZE];
    size_t n;
    printf("Array size (1-%d): ", MAX_SIZE);
    if (scanf("%zu", &n) != 1 || !n || n > MAX_SIZE) {
        puts("Invalid size.");
        return 1;
    }
    printf("Enter %zu integers: ", n);
    for (size_t i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1) {
            puts("Invalid array input.");
            return 1;
        }
    printf("Sum: %lld\n", array_sum(a, n));
    return 0;
}
