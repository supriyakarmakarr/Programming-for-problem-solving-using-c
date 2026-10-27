/*
 * 328. Write a program to find the longest palindromic substring.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    size_t n = strlen(s), start = 0, best = n ? 1 : 0;
    for (size_t i = 0; i < n; i++)
        for (int even = 0; even < 2; even++) {
            size_t l = i, r = i + even;       // expand around the centre
            while (r < n && s[l] == s[r]) {
                if (r - l + 1 > best) { best = r - l + 1; start = l; }
                if (l == 0) break;
                l--, r++;
            }
        }
    printf("Longest palindromic substring: %.*s\n", (int)best, s + start);
    return 0;
}
