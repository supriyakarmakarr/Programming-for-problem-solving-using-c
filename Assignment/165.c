/*Write a program for a given number to raise each digit to the power of its position
(starting from 1) and find the sum. If the sum equals the original number, print Special
Number else not.*/



#include <stdio.h>

int main()
{
    int n, original, digit, position = 1;
    int sum = 0, power, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0)
    {
        digit = n % 10;

        power = 1;

        for(i = 1; i <= position; i++)
        {
            power = power * digit;
        }

        sum = sum + power;

        n = n / 10;
        position++;
    }

    if(sum == original)
        printf("Special Number");
    else
        printf("Not a Special Number");

    return 0;
}