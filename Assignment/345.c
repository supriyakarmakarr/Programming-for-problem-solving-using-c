/*
 * 345. Write a program to find the longest repeating substring.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    size_t n = strlen(s), best = 0, end = 0;
    unsigned dp[1025] = {0};
    for (size_t i = 1; i <= n; i++)
        for (size_t j = n; j > i; j--) {       // dp[j]: match length ending at i-1 and j-1 (overlap allowed)
            dp[j] = s[i - 1] == s[j - 1] ? dp[j - 1] + 1 : 0;
            if (dp[j] > best) best = dp[j], end = i;
        }
    if (best) printf("Longest repeating substring: %.*s\n", (int)best, s + end - best);
    else puts("No repeating substring");
    return 0;
}
