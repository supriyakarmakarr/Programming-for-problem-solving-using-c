#include <stdio.h>
static long long square(int number) { return (long long)number * number; }
int main(void) {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        puts("Invalid input.");
        return 1;
    }
    printf("Square: %lld\n", square(n));
    return 0;
}
