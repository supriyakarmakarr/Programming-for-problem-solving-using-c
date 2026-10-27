/*
 * 346. Write a program to generate all permutations of a string.
 */

#include <stdio.h>
#include <string.h>

static void permute(char *s, size_t l, size_t r)
{
    if (l == r) {
        puts(s);
        return;
    }
    for (size_t i = l; i <= r; i++) {
        char tmp = s[l]; s[l] = s[i]; s[i] = tmp;
        permute(s, l + 1, r);
        tmp = s[l]; s[l] = s[i]; s[i] = tmp;       // backtrack
    }
}

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    size_t n = strlen(s);
    if (n) permute(s, 0, n - 1);
    return 0;
}
