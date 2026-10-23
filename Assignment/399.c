#include <stdio.h>
#define MAX_SIZE 100
static void copy_array(const int source[], int destination[], size_t n) {
    for (size_t i = 0; i < n; i++)
        destination[i] = source[i];
}
int main(void) {
    int source[MAX_SIZE], copy[MAX_SIZE];
    size_t n;
    printf("Array size (1-%d): ", MAX_SIZE);
    if (scanf("%zu", &n) != 1 || !n || n > MAX_SIZE)
        return 1;
    printf("Enter %zu integers: ", n);
    for (size_t i = 0; i < n; i++)
        if (scanf("%d", &source[i]) != 1)
            return 1;
    copy_array(source, copy, n);
    printf("Copied array:");
    for (size_t i = 0; i < n; i++)
        printf(" %d", copy[i]);
    putchar('\n');
    return 0;
}
