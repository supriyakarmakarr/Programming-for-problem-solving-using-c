#include <stdio.h>
static unsigned int sum_digits(long long number) {
    unsigned long long value =
        number < 0 ? (unsigned long long)(-(number + 1)) + 1 : (unsigned long long)number;
    unsigned int sum = 0;
    do {
        sum += (unsigned int)(value % 10);
        value /= 10;
    } while (value);
    return sum;
}
int main(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) {
        puts("Invalid input.");
        return 1;
    }
    printf("Sum of digits: %u\n", sum_digits(n));
    return 0;
}
