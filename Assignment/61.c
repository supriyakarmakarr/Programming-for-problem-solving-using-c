// Write a program to print numbers divisible by 5 between 1 and N.

#include <stdio.h>

int main() {
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            printf("%d \n", i);
        }
    }

    return 0;
}