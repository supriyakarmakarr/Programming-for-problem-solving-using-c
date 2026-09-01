// Write a program to count the total number of factors of a number.


#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    printf("Total number of factors = %d", count);

    return 0;
}