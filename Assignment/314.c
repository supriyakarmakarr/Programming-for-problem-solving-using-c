/*
 * 314. Write a program to check whether a string is a pangram.
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
    unsigned mask = 0;
    for (const char *p = s; *p; p++)
        if (isalpha((unsigned char)*p)) mask |= 1u << (tolower((unsigned char)*p) - 'a');
    puts(mask == (1u << 26) - 1 ? "String is a pangram" : "String is not a pangram");
    return 0;
}
