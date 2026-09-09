/*Write a program for a given number to find the absolute difference between the number
and its reverse. If the difference is divisible by 9, print Magic Number, otherwise Not
Magic Number.*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, temp, digit, rev = 0, diff;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    diff = abs(n - rev);

    if (diff % 9 == 0)
        printf("Magic Number");
    else
        printf("Not Magic Number");

    return 0;
}