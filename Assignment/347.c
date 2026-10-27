/*
 * 347. Write a program to check whether a string is an isogram.
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
    unsigned seen = 0;
    int ok = 1;
    for (const char *p = s; *p && ok; p++)
        if (isalpha((unsigned char)*p)) {
            unsigned bit = 1u << (tolower((unsigned char)*p) - 'a');
            ok = !(seen & bit);
            seen |= bit;
        }
    puts(ok ? "String is an isogram" : "String is not an isogram");
    return 0;
}
