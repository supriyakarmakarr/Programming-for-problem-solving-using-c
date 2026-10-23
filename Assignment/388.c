#include <stdio.h>
static long long sum_first_n(unsigned int n) { return (long long)n * (n + 1) / 2; }
int main(void) {
    unsigned int n;
    printf("Enter N (0-607400099): ");
    if (scanf("%u", &n) != 1 || n > 607400099U) {
        puts("N is out of supported range.");
        return 1;
    }
    printf("Sum: %lld\n", sum_first_n(n));
    return 0;
}
