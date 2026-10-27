/*
 * 335. Write a program to check whether a string follows a given pattern.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter pattern (e.g. abba): ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    char t[1024];
    printf("Enter words separated by spaces: ");
    if (!fgets(t, sizeof t, stdin)) return 1;
    t[strcspn(t, "\n")] = '\0';
    const char *map[256] = {0};
    size_t i = 0;
    int ok = 1;
    for (char *w = strtok(t, " "); w && ok; w = strtok(NULL, " "), i++) {
        unsigned char c = s[i];
        if (!c) { ok = 0; break; }
        if (map[c]) ok = strcmp(map[c], w) == 0;
        else {
            for (int k = 0; k < 256; k++)
                if (map[k] && strcmp(map[k], w) == 0) ok = 0;    // word already used by another letter
            map[c] = w;
        }
    }
    ok = ok && s[i] == '\0';
    puts(ok ? "String follows the pattern" : "String does not follow the pattern");
    return 0;
}
