#include <stdio.h>
static int minimum_of_three(int a, int b, int c) {
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    return min;
}
int main(void) {
    int a, b, c;
    printf("Enter three integers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        puts("Invalid input.");
        return 1;
    }
    printf("Minimum: %d\n", minimum_of_three(a, b, c));
    return 0;
}
