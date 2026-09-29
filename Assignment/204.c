/* Write a program to store user input in an array and create prime and
 * non-prime arrays. */
#include <stdio.h>

int prime(int x)
{
    int d;
    if (x < 2)
        return 0;
    for (d = 2; d * d <= x; d++)
        if (x % d == 0)
            return 0;
    return 1;
}
int main(void)
{
    int a[100], p[100], q[100], n, i, np = 0, nq = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    /* Put each input number into the correct output array. */
    for (i = 0; i < n; i++)
        if (prime(a[i]))
            p[np++] = a[i];
        else
            q[nq++] = a[i];
    printf("Prime numbers: ");
    for (i = 0; i < np; i++)
        printf("%d ", p[i]);
    printf("\nNon-prime numbers: ");
    for (i = 0; i < nq; i++)
        printf("%d ", q[i]);
    return 0;
}
