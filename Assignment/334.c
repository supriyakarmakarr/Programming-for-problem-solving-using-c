#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char first[MAX_LENGTH], second[MAX_LENGTH];
    printf("Enter the first string: ");
    if (fgets(first, sizeof first, stdin) == NULL)
        return 1;
    first[strcspn(first, "\n")] = '\0';
    printf("Enter the second string: ");
    if (fgets(second, sizeof second, stdin) == NULL)
        return 1;
    second[strcspn(second, "\n")] = '\0';
    size_t n = strlen(first), m = strlen(second), best = 0, end = 0;
    size_t dp[MAX_LENGTH] = {0};
    for (size_t i = 1; i <= n; ++i) {
        for (size_t j = m; j > 0; --j) {
            dp[j] = first[i - 1] == second[j - 1] ? dp[j - 1] + 1 : 0;
            if (dp[j] > best) {
                best = dp[j];
                end = i;
            }
        }
    }
    printf("Longest common substring: %.*s\n", (int)best, first + end - best);
    return 0;
}
