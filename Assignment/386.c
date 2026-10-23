#include <stdio.h>
static unsigned int count_digits(long long n) {
    unsigned long long v = n < 0 ? (unsigned long long)(-(n + 1)) + 1 : (unsigned long long)n;
    unsigned int count = 0;
    do {
        count++;
        v /= 10;
    } while (v);
    return count;
}
int main(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) {
        puts("Invalid input.");
        return 1;
    }
    printf("Digit count: %u\n", count_digits(n));
    return 0;
}
