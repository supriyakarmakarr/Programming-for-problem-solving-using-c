/*
 * 311. Write a program to capitalize the first letter of each word in a string.
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
        if (newWord) s[i] = toupper((unsigned char)s[i]);
        newWord = isspace((unsigned char)s[i]);
    }
    printf("Result: %s\n", s);
    return 0;
}
