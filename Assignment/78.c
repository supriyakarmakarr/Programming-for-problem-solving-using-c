// Write a program to check whether a number is a perfect number.



#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n)
        printf("%d is a perfect number", n);
    else
        printf("%d is not a perfect number", n);

    return 0;
}