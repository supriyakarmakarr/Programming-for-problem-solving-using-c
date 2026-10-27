/*
 * 302. Write a program to check whether a string contains only digits.
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
    int ok = *s != '\0';
    for (const char *p = s; *p; p++)
        ok &= isdigit((unsigned char)*p) != 0;
    puts(ok ? "String contains only digits" : "String does not contain only digits");
    return 0;
}
