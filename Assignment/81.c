// Write a program to print Nth prime number.



#include <stdio.h>

int main() {
    int n, count = 0, num = 1, prime;

    printf("Enter Number : ");
    scanf("%d", &n);

    while (count < n) {
        num++;
        prime = 1;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
            count++;
    }

    printf("The %dth prime number is %d", n, num);

    return 0;
}