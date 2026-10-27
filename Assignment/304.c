/*
 * 304. Write a program to find the index of the last occurrence of a character.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    char c;
    printf("Enter character: ");
    if (scanf(" %c", &c) != 1) return 1;
    const char *p = strrchr(s, c);
    if (p) printf("Last occurrence of '%c' at index %td\n", c, p - s);
    else printf("'%c' not found\n", c);
    return 0;
}
