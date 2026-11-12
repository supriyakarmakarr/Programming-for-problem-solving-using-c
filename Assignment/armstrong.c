#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int temp = n, rem, sum = 0, digits = 0;
    int x = n;
    while (x > 0) {
        digits++;
        x /= 10;
    }
    while (temp > 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n)) {
        printf("%d is an Armstrong number", n);
    }
    else {
        printf("%d is not an Armstrong number", n);
    }

    return 0;
}
