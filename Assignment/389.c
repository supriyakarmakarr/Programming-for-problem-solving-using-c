#include <stdio.h>
static unsigned long long integer_power(unsigned int base, unsigned int exponent) {
    unsigned long long result = 1;
    while (exponent--)
        result *= base;
    return result;
}
static int is_armstrong(unsigned int n) {
    unsigned int digits = 1;
    for (unsigned int t = n; t >= 10; t /= 10)
        digits++;
    unsigned int original = n;
    unsigned long long sum = 0;
    do {
        sum += integer_power(n % 10, digits);
        n /= 10;
    } while (n);
    return sum == original;
}
int main(void) {
    unsigned int n;
    printf("Enter a non-negative integer: ");
    if (scanf("%u", &n) != 1) {
        puts("Invalid input.");
        return 1;
    }
    puts(is_armstrong(n) ? "Armstrong number." : "Not an Armstrong number.");
    return 0;
}
