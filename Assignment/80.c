// Write a program to print all prime numbers between 1 and N.



#include <stdio.h>

int main() {
    int n, count;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int num = 2; num <= n; num++) {
        count = 0;

        for (int i = 1; i <= num; i++) {
            if (num % i == 0)
                count++;
        }

        if (count == 2)
            printf("%d ", num);
    }

    return 0;
}