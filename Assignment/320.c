/*
 * 320. Write a program to extract digits from a string.
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
    printf("Digits: ");
    for (const char *p = s; *p; p++)
        if (isdigit((unsigned char)*p)) putchar(*p);
    putchar('\n');
    return 0;
}
