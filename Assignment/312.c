/*
 * 312. Write a program to convert a string into title case.
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
    for (size_t i = 0, newWord = 1; s[i]; i++) {
        s[i] = newWord ? toupper((unsigned char)s[i]) : tolower((unsigned char)s[i]);
        newWord = isspace((unsigned char)s[i]);
    }
    printf("Title case: %s\n", s);
    return 0;
}
