/*
 * 363. Write a program to reverse a string using recursion.
 */

#include <stdio.h>
#include <string.h>

static void reverse(char *s, size_t l, size_t r)
{
    if (l >= r) return;
    char tmp = s[l];
    s[l] = s[r];
    s[r] = tmp;
    reverse(s, l + 1, r - 1);
}

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    size_t n = strlen(s);
    if (n) reverse(s, 0, n - 1);
    printf("Reversed: %s\n", s);
    return 0;
}
