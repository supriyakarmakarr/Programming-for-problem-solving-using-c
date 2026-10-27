/*
 * 316. Write a program to remove extra spaces from a string.
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
    size_t j = 0;
    int gap = 0;
    for (size_t i = 0; s[i]; i++) {
        if (isspace((unsigned char)s[i])) gap = j > 0;
        else {
            if (gap) s[j++] = ' ';
            s[j++] = s[i];
            gap = 0;
        }
    }
    s[j] = '\0';
    printf("Result: \"%s\"\n", s);
    return 0;
}
