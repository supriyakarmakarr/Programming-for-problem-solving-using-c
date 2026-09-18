/*Write a program for a given number, remove all digits divisible by 3 and form a new
number. Print the newly formed number.*/


#include <stdio.h>

int main() {
    int n, digit, newNum = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit % 3 != 0) {
            newNum = newNum + digit * place;
            place = place * 10;
        }

        n = n / 10;
    }

    printf("New number = %d", newNum);

    return 0;
}
