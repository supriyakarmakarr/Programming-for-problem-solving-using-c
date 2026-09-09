// Write a program to find Nth term. 1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17....



#include <stdio.h>

int isPrime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int N;
    scanf("%d", &N);

    int fib1 = 1, fib2 = 1;
    int prime = 2;
    int count = 0;

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 1)   // Odd position
        {
            if (i == 1)
                printf("%d", fib1);
            else if (i == 3)
                printf(" %d", fib2);
            else
            {
                int next = fib1 + fib2;
                fib1 = fib2;
                fib2 = next;
                printf(" %d", fib2);
            }
        }
        else              // Even position
        {
            while (!isPrime(prime))
                prime++;

            printf(" %d", prime);
            prime++;
        }
    }

    return 0;
}