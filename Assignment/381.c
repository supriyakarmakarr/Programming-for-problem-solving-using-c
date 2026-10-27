/*
 * 381. Write a function to check whether a number is a palindrome.
 */

#include <stdio.h>

static int isPalindrome(int n)
{
    long long rev = 0;
    for (int t = n; t > 0; t /= 10) rev = rev * 10 + t % 10;
    return n >= 0 && rev == n;
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    puts(isPalindrome(n) ? "Palindrome number" : "Not a palindrome number");
    return 0;
}
