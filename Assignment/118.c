// Write a program to print all duck numbers between 1 and N.


#include <stdio.h>

int main() {
    int N, i, n, digit, flag;

    printf("Enter N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        n = i;
        flag = 0;

        while (n > 0) {
            digit = n % 10;

            if (digit == 0) {
                flag = 1;
                break;
            }

            n = n / 10;
        }

        if (flag == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}