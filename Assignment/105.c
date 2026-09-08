// Write a program to print all strong numbers between 1 and N.


#include <stdio.h>

int main()
{
    int N, i, j, temp, digit, fact, sum;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Strong numbers between 1 and %d are:\n", N);

    for (i = 1; i <= N; i++)
    {
        temp = i;
        sum = 0;

        while (temp != 0)
        {
            digit = temp % 10;

            fact = 1;
            for (j = 1; j <= digit; j++)
            {
                fact = fact * j;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}