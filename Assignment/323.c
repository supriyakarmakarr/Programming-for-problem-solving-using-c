/*
 * 323. Write a program to validate a mobile number using length and digit rules.
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
    int ok = strlen(s) == 10 && strchr("6789", s[0]);
    for (const char *p = s; ok && *p; p++)
        ok = isdigit((unsigned char)*p) != 0;
    puts(ok ? "Valid mobile number" : "Invalid mobile number");
    return 0;
}
