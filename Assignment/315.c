/*
 * 315. Write a program to check whether a string is a valid identifier.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    int ok = isalpha((unsigned char)*s) || *s == '_';
    for (const char *p = s + 1; ok && *p; p++)
        ok = isalnum((unsigned char)*p) || *p == '_';
    puts(ok ? "Valid identifier" : "Invalid identifier");
    return 0;
}
