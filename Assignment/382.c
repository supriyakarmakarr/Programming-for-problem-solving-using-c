#include <stdio.h>
static int is_prime(int n) {
    if (n < 2)
        return 0;
    if (n % 2 == 0)
        return n == 2;
    for (int d = 3; d <= n / d; d += 2)
        if (n % d == 0)
            return 0;
    return 1;
}
int main(void) {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        puts("Invalid input.");
        return 1;
    }
    puts(is_prime(n) ? "Prime number." : "Not a prime number.");
    return 0;
}
