#include <stdio.h>
void bin(int n) {
    if(n == 0) return;
    bin(n/2);
    printf("%d ", n%2);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Binary = ");
    if(n == 0)
        printf("0");
    else
        bin(n);
    return 0;
}