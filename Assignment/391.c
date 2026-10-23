#include <limits.h>
#include <stdio.h>
static unsigned long long magnitude(long long n) {
    return n < 0 ? (unsigned long long)(-(n + 1)) + 1 : (unsigned long long)n;
}
static unsigned long long gcd(unsigned long long a, unsigned long long b) {
    while (b) {
        unsigned long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main(void) {
    long long x, y;
    printf("Enter two integers: ");
    if (scanf("%lld %lld", &x, &y) != 2) {
        puts("Invalid input.");
        return 1;
    }
    unsigned long long a = magnitude(x), b = magnitude(y);
    if (!a || !b) {
        puts("LCM: 0");
        return 0;
    }
    unsigned long long g = gcd(a, b), q = a / g;
    if (q > ULLONG_MAX / b) {
        puts("LCM is too large to represent.");
        return 1;
    }
    printf("LCM: %llu\n", q * b);
    return 0;
}
