/*
 * 329. Write a program to count palindromic substrings in a string.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    size_t n = strlen(s), count = 0;
    for (size_t i = 0; i < n; i++)
        for (int even = 0; even < 2; even++) {
            size_t l = i, r = i + even;       // expand around the centre
            while (r < n && s[l] == s[r]) {
                count++;
                if (l == 0) break;
                l--, r++;
            }
        }
    printf("Palindromic substrings: %zu\n", count);
    return 0;
}
