#include <stdio.h>

void ins(int x, int n) {
    if (x > n) return;

    printf("%d\n", x);
    ins(x + 1, n);
    return;
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    ins(1, n);
    return 0;
}