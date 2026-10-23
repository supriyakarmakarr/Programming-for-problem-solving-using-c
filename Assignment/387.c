#include <stdio.h>
static void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        puts("Invalid input.");
        return 1;
    }
    swap(&a, &b);
    printf("After swap: %d %d\n", a, b);
    return 0;
}
