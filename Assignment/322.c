/*
 * 322. Write a program to validate an email format using basic rules.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    const char *at = strchr(s, '@');
    const char *dot = at ? strrchr(at, '.') : NULL;
    int ok = at && at > s && !strchr(at + 1, '@') && !strchr(s, ' ') && dot && dot > at + 1 && dot[1];
    puts(ok ? "Valid email format" : "Invalid email format");
    return 0;
}
