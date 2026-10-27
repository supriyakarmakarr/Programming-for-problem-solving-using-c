/*
 * 337. Write a program to remove all occurrences of a substring from a string.
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
    printf("Enter substring to remove: ");
    if (!fgets(t, sizeof t, stdin)) return 1;
    t[strcspn(t, "\n")] = '\0';
    size_t lt = strlen(t);
    if (lt)
        for (char *p = s; (p = strstr(p, t)) != NULL; )
            memmove(p, p + lt, strlen(p + lt) + 1);
    printf("Result: %s\n", s);
    return 0;
}
