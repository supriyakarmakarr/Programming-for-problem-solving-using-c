// Write a program to print all perfect numbers between 1 and N.


#include <stdio.h>

int main()
{
    int N, i, j, sum;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Perfect numbers between 1 and %d are:\n", N);

    for (i = 1; i <= N; i++)
    {
        sum = 0;

        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}