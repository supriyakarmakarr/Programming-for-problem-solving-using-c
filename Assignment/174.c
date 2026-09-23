/*Write a program to find and print which digits are missing from the number (contains
digits from 0–9).*/



#include <stdio.h>

int main() {
    int n, digit;
    int present[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        present[digit] = 1;
        n = n / 10;
    }

    printf("Missing digits: ");

    for (digit = 0; digit <= 9; digit++) {
        if (present[digit] == 0)
            printf("%d ", digit);
    }

    return 0;
}
