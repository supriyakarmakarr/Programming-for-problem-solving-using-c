/*
 * 375. Write a function to add two integers and return the result.
 */

#include <stdio.h>

static long long add(int a, int b)
{
    return (long long)a + b;
}

int main(void)
{
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    printf("%d + %d = %lld\n", a, b, add(a, b));
    return 0;
}
