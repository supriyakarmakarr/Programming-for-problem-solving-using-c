#include <stdio.h>
#define MAX_SIZE 100
static void bubble_sort(int a[], size_t n) {
    for (size_t i = 0; i < n; i++) {
        int changed = 0;
        for (size_t j = 0; j + 1 < n - i; j++)
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                changed = 1;
            }
        if (!changed)
            break;
    }
}
int main(void) {
    int a[MAX_SIZE];
    size_t n;
    printf("Array size (1-%d): ", MAX_SIZE);
    if (scanf("%zu", &n) != 1 || !n || n > MAX_SIZE)
        return 1;
    printf("Enter %zu integers: ", n);
    for (size_t i = 0; i < n; i++)
        if (scanf("%d", &a[i]) != 1)
            return 1;
    bubble_sort(a, n);
    printf("Ascending order:");
    for (size_t i = 0; i < n; i++)
        printf(" %d", a[i]);
    putchar('\n');
    return 0;
}
