// Write a program to check whether a number is an Armstrong number.


#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, digit, count = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    
    while(temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = n;

    
    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    if(sum == n)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}