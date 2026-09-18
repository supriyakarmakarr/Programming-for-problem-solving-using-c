/*Write a program for a number is given, Reverse the number and checkwhether both the
number and its reverse have the same number of factors or not.*/


#include <stdio.h>

int main() {
    int n, original, reverse = 0, digit;
    int i, factors1 = 0, factors2 = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Reverse the number
    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    // Count factors of original number
    for (i = 1; i <= original; i++) {
        if (original % i == 0)
            factors1++;
    }

    // Count factors of reverse number
    for (i = 1; i <= reverse; i++) {
        if (reverse % i == 0)
            factors2++;
    }

    printf("Reverse = %d\n", reverse);
    printf("Factors of original number = %d\n", factors1);
    printf("Factors of reverse number = %d\n", factors2);

    if (factors1 == factors2)
        printf("Both have the same number of factors");
    else
        printf("Both do not have the same number of factors");

    return 0;
}
