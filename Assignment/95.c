// Write a program to count the frequency of a given digit in a number.


#include <stdio.h>

int main()
{
    int n, digit, d, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter the digit to find: ");
    scanf("%d", &d);

    while(n > 0)
    {
        digit = n % 10;

        if(digit == d)
            count++;

        n = n / 10;
    }

    printf("Frequency of %d = %d", d, count);

    return 0;
}