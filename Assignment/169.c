/*Write a program for a number is given. Count how many of its digits are prime digits.
If the count is greater than 2, print Prime-Rich Number else not.*/


#include <stdio.h>

int main()
{
    int n, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;

        if(digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count++;
        }

        n = n / 10;
    }

    if(count > 2)
        printf("Prime-Rich Number");
    else
        printf("Not Prime-Rich Number");

    return 0;
}
