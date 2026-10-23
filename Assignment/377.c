#include <stdio.h>
static unsigned long long factorial(unsigned int n) {
    unsigned long long result = 1;
    for (unsigned int i = 2; i <= n; i++)
        result *= i;
    return result;
}
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
