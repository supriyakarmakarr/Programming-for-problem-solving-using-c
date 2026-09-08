// Write a program to print numbers which are perfectsquares between 1 and N.


#include <stdio.h>

int main()
{
    int N, i;

    printf("Enter Number : ");
    scanf("%d", &N);

    printf("Perfect squares between 1 and %d are:\n", N);

    for (i = 1; i * i <= N; i++)
    {
        printf("%d ", i * i);
    }

    return 0;
}