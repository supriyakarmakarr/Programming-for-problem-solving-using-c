
#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Factorial: %llu\n", factorial(n));
    return 0;
}
