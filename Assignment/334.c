/*
 * 334. Write a program to find the longest common substring between two strings.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter first string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    char t[1024];
    printf("Enter second string: ");
    if (!fgets(t, sizeof t, stdin)) return 1;
    t[strcspn(t, "\n")] = '\0';
    size_t n = strlen(s), m = strlen(t), best = 0, end = 0;
    unsigned dp[1025] = {0};
    for (size_t i = 1; i <= n; i++)
        for (size_t j = m; j >= 1; j--) {      // right to left keeps the previous row
            dp[j] = s[i - 1] == t[j - 1] ? dp[j - 1] + 1 : 0;
            if (dp[j] > best) best = dp[j], end = i;
        }
    printf("Longest common substring: \"%.*s\" (length %zu)\n", (int)best, s + end - best, best);
    return 0;
}
