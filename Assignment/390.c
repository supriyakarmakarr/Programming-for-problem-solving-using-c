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
    long long a, b;
    printf("Enter two integers: ");
    if (scanf("%lld %lld", &a, &b) != 2) {
        puts("Invalid input.");
        return 1;
    }
    printf("GCD: %llu\n", gcd(magnitude(a), magnitude(b)));
    return 0;
}
