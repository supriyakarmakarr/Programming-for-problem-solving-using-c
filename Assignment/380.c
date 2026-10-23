#include <stdio.h>
static long long reverse_number(int number) {
    long long value = number < 0 ? -(long long)number : number;
    long long reversed = 0;
    do {
        reversed = reversed * 10 + value % 10;
        value /= 10;
    } while (value != 0);
    return number < 0 ? -reversed : reversed;
}
int main(void) {
    int number;
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        puts("Invalid input.");
        return 1;
    }
    printf("Reversed number: %lld\n", reverse_number(number));
    return 0;
}
