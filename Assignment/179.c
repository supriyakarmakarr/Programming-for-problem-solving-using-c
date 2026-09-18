/*Write a program forreverse a number and checkwhether reversed numbers and original
numbers are prime or not. If yes, print Twisted Prime.*/



#include <stdio.h>

int main() {
    int n, original, reverse = 0, digit;
    int i, prime1 = 1, prime2 = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Reverse the number
    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    // Check original number is prime
    if (original < 2)
        prime1 = 0;

    for (i = 2; i < original; i++) {
        if (original % i == 0) {
            prime1 = 0;
            break;
        }
    }

    // Check reverse number is prime
    if (reverse < 2)
        prime2 = 0;

    for (i = 2; i < reverse; i++) {
        if (reverse % i == 0) {
            prime2 = 0;
            break;
        }
    }

    printf("Reverse = %d\n", reverse);

    if (prime1 && prime2)
        printf("Twisted Prime");
    else
        printf("Not a Twisted Prime");

    return 0;
}
