// Write a program to print all numbers between 1 and N which are divisible by 7 but not
// divisible by 5.


#include <stdio.h>

int main() {
    int N;

    printf("Enter Number : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 7 == 0 && i % 5 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}