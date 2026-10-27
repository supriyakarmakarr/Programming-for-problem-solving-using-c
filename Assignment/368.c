/*
 * 368. Write a program to count the different types of characters in given string.
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
    int upper = 0, lower = 0, digit = 0, space = 0, special = 0;
    for (const char *p = s; *p; p++) {
        unsigned char c = *p;
        if (isupper(c)) upper++;
        else if (islower(c)) lower++;
        else if (isdigit(c)) digit++;
        else if (isspace(c)) space++;
        else special++;
    }
    printf("Uppercase: %d\nLowercase: %d\nDigits: %d\nSpaces: %d\nSpecial: %d\n", upper, lower, digit, space, special);
    return 0;
}
