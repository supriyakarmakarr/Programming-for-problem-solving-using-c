/*
 * 309. Write a program to find all occurrences of a substring in a string.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    char t[1024];
    printf("Enter substring: ");
    if (!fgets(t, sizeof t, stdin)) return 1;
    t[strcspn(t, "\n")] = '\0';
    int found = 0;
    if (*t)
        for (const char *p = s; (p = strstr(p, t)) != NULL; p++, found++)
            printf("Found at index %td\n", p - s);
    if (!found) puts("Substring not found");
    return 0;
}
