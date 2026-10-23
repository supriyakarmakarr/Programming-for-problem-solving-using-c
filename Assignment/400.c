#include <stdio.h>
#define MAX_SIZE 100
int main(void) {
    int a[MAX_SIZE], b[MAX_SIZE], merged[MAX_SIZE * 2];
    size_t n, m;
    printf("Size of first array (0-%d): ", MAX_SIZE);
    if (scanf("%zu", &n) != 1 || n > MAX_SIZE)
        return 1;
    printf("Enter first array: ");
    for (size_t i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1)
            return 1;
    printf("Size of second array (0-%d): ", MAX_SIZE);
    if (scanf("%zu", &m) != 1 || m > MAX_SIZE)
        return 1;
    printf("Enter second array: ");
    for (size_t i = 0; i < m; i++)
        if (scanf("%d", &b[i]) != 1)
            return 1;
    for (size_t i = 0; i < n; i++)
        merged[i] = a[i];
    for (size_t i = 0; i < m; i++)
        merged[n + i] = b[i];
    printf("Merged array:");
    for (size_t i = 0; i < n + m; i++)
        printf(" %d", merged[i]);
    putchar('\n');
    return 0;
}
