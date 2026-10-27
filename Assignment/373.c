/*
 * 373. Write a program to find the longest substring without repeating characters.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    int last[256], n = (int)strlen(s), start = 0, bestStart = 0, best = 0;
    memset(last, -1, sizeof last);
    for (int i = 0; i < n; i++) {
        unsigned char c = s[i];
        if (last[c] >= start) start = last[c] + 1;      // jump past the previous copy
        last[c] = i;
        if (i - start + 1 > best) best = i - start + 1, bestStart = start;
    }
    printf("Longest substring without repeating characters: \"%.*s\" (length %d)\n", best, s + bestStart, best);
    return 0;
}
