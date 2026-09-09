// Write a program to find Nth term. 0, 0, 2, 1, 4, 2, 6, 3, 8, 4, 10, 5, 12, 6, 14, 7, 16, 8....


#include <stdio.h>

int main()
{
    int N, term;

    scanf("%d", &N);

    if (N % 2 == 1)
        term = N - 1;
    else
        term = (N / 2) - 1;

    printf("%d", term);

    return 0;
}