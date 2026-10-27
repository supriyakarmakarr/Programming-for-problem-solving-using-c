/*
 * 354. Write a program to find the most frequent word in a string.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    char *w[512];
    int n = 0, bestCount = 0;
    const char *best = NULL;
    for (char *tok = strtok(s, " "); tok && n < 512; tok = strtok(NULL, " "))
        w[n++] = tok;
    for (int i = 0; i < n; i++) {
        int c = 0;
        for (int j = 0; j < n; j++)
            c += strcmp(w[i], w[j]) == 0;
        if (c > bestCount) bestCount = c, best = w[i];
    }
    if (best) printf("Most frequent word: %s (%d times)\n", best, bestCount);
    else puts("No words found");
    return 0;
}
