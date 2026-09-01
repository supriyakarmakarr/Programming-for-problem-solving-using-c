// Write a program to count even and odd digits in a number.


#include <stdio.h>

int main()
{
    int n, digit;
    int even = 0, odd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;

        if(digit % 2 == 0)
            even++;
        else
            odd++;

        n = n / 10;
    }

    printf("Even digits = %d\n", even);
    printf("Odd digits = %d\n", odd);

    return 0;
}