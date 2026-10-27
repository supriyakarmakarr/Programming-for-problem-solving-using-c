/*
 * 352. Write a program to validate a URL using basic string rules.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    const char *p = strncmp(s, "https://", 8) == 0 ? s + 8 : strncmp(s, "http://", 7) == 0 ? s + 7 : NULL;
    int ok = 0;
    if (p && !strchr(s, ' ')) {
        size_t h = strcspn(p, "/?#");                 // length of the host part
        ok = h > 2 && p[0] != '.' && p[h - 1] != '.' && memchr(p, '.', h) != NULL;
    }
    puts(ok ? "Valid URL" : "Invalid URL");
    return 0;
}
