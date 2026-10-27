/*
 * 378. Write a function to find the minimum of three numbers.
 */

#include <stdio.h>

static int min3(int a, int b, int c)
{
    int m = a < b ? a : b;
    return m < c ? m : c;
}

int main(void)
{
    int a, b, c;
    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;
    printf("Minimum = %d\n", min3(a, b, c));
    return 0;
}
