#include <stdio.h>

int main() {
    int n, i, j, sum, count = 0;

    printf("Enter Number: ");
    scanf("%d", &n);

    printf("Perfect numbers from 1 to %d are: ", n);

    for (i = 1; i <= n; i++) {
        sum = 0;

        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        if (sum == i) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal Perfect Numbers = %d", count);

    return 0;
}