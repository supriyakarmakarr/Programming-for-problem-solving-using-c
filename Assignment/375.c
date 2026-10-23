#include <stdio.h>
static long long add_integers(int a, int b) { return (long long)a + b; }
int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        puts("Invalid input.");
        return 1;
    }
    printf("Sum: %lld\n", add_integers(a, b));
    return 0;
}
