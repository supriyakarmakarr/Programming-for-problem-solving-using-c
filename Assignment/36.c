// Input an integer n, perform the following conditional actions,
// If n is odd, print weird,
// If n is even and in the inclusive range of 2 to 5, print not weird,
// If n is even and in the inclusive range 6 to 20, print weird,
// If n is even and greater than 20, print not weird.


#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("Weird");
    }
    else if (n >= 2 && n <= 5) {
        printf("Not Weird");
    }
    else if (n >= 6 && n <= 20) {
        printf("Weird");
    }
    else if (n > 20) {
        printf("Not Weird");
    }

    return 0;
}