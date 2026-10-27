/*
 * 389. Write a function to check Armstrong number.
 */

#include <stdio.h>

static int isArmstrong(int n)
{
    int digits = 0;
    long long sum = 0;
    for (int t = n; t > 0; t /= 10) digits++;
    for (int t = n; t > 0; t /= 10) {
        long long p = 1;
        for (int i = 0; i < digits; i++) p *= t % 10;
        sum += p;
    }
    return n >= 0 && sum == n;
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    puts(isArmstrong(n) ? "Armstrong number" : "Not an Armstrong number");
    return 0;
}
