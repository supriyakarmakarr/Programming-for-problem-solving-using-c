/*
 * 360. Write a program to compute the edit distance between two strings.
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
    size_t n = strlen(s), m = strlen(t);
    unsigned dp[1025];
    for (size_t j = 0; j <= m; j++) dp[j] = (unsigned)j;
    for (size_t i = 1; i <= n; i++) {
        unsigned prev = dp[0];
        dp[0] = (unsigned)i;
        for (size_t j = 1; j <= m; j++) {
            unsigned keep = dp[j];
            unsigned best = prev + (s[i - 1] != t[j - 1]);          // substitute / match
            if (dp[j] + 1 < best) best = dp[j] + 1;                  // delete
            if (dp[j - 1] + 1 < best) best = dp[j - 1] + 1;          // insert
            dp[j] = best;
            prev = keep;
        }
    }
    printf("Edit distance: %u\n", dp[m]);
    return 0;
}
