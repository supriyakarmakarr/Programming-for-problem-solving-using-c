#include <stdio.h>
static unsigned long long factorial(unsigned int n) { return n < 2 ? 1ULL : n * factorial(n - 1); }
int main(void) {
    unsigned int n;
    printf("Enter a non-negative integer (0-20): ");
    if (scanf("%u", &n) != 1 || n > 20) {
        puts("Enter a value from 0 to 20.");
        return 1;
    }
    printf("Factorial: %llu\n", factorial(n));
    return 0;
}
