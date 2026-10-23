#include <stdio.h>
#define MAX_SIZE 100
static void selection_sort_descending(int a[], size_t n) {
    for (size_t i = 0; i < n; i++) {
        size_t largest = i;
        for (size_t j = i + 1; j < n; j++)
            if (a[j] > a[largest])
                largest = j;
        int t = a[i];
        a[i] = a[largest];
        a[largest] = t;
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
    selection_sort_descending(a, n);
    printf("Descending order:");
    for (size_t i = 0; i < n; i++)
        printf(" %d", a[i]);
    putchar('\n');
    return 0;
}
