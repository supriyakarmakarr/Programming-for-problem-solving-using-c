// Write a program to print numbers which are perfect cubes between 1 and N.


#include <stdio.h>

int main()
{
    int N, i;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Perfect cubes between 1 and %d are:\n", N);

    for (i = 1; i * i * i <= N; i++)
    {
        printf("%d ", i * i * i);
    }

    return 0;
}