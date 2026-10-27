/*
 * 366. Write a program to remove HTML/XML-like tags from a string.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    size_t j = 0;
    int inTag = 0;
    for (size_t i = 0; s[i]; i++) {
        if (s[i] == '<') inTag = 1;
        else if (s[i] == '>' && inTag) inTag = 0;
        else if (!inTag) s[j++] = s[i];
    }
    s[j] = '\0';
    printf("Result: %s\n", s);
    return 0;
}
