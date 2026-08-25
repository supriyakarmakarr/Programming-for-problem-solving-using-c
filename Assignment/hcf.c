#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two numbers:\n ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("HCF = %d", hcf);

    return 0;
}

