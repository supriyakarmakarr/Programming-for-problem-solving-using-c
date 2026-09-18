/*Write a program for Multiply each digit by its position index and find the total sum. If
the sum is even, print Weighted Even, else Weighted Odd.*/


#include <stdio.h>

int main() {
    int n, digit, position = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        sum = sum + digit * position;
        n = n / 10;
        position++;
    }

    printf("Weighted Sum = %d\n", sum);

    if (sum % 2 == 0)
        printf("Weighted Even");
    else
        printf("Weighted Odd");

    return 0;
}
