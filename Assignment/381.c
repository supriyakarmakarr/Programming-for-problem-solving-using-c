#include <stdio.h>
static int is_palindrome(int number) {
    if (number < 0)
        return 0;
    int original = number;
    long long reversed = 0;
    do {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    } while (number != 0);
    return original == reversed;
}
int main(void) {
    int number;
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        puts("Invalid input.");
        return 1;
    }
    puts(is_palindrome(number) ? "The number is a palindrome." : "The number is not a palindrome.");
    return 0;
}
