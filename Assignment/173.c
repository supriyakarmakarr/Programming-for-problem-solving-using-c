/*Write a program to swap the first and last digit of a number. If the new number is
divisible by 11, print Swap Success.*/



#include <stdio.h>

int main() {
    int n, first, last, digits = 1, temp, newNum;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Find last digit
    last = n % 10;

    // Find first digit and number of digits
    while (temp >= 10) {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    // Remove first and last digit and swap them
    newNum = n % digits;
    newNum = newNum / 10;
    newNum = first + newNum * 10;
    newNum = newNum * 10 + last;

    printf("New number = %d\n", newNum);

    if (newNum % 11 == 0)
        printf("Swap Success");
    else
        printf("Swap Failed");

    return 0;
}
