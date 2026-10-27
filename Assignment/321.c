/*
 * 321. Write a program to extract alphabets from a string.
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
    printf("Alphabets: ");
    for (const char *p = s; *p; p++)
        if (isalpha((unsigned char)*p)) putchar(*p);
    putchar('\n');
    return 0;
}
