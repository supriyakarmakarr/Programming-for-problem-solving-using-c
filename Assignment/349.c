/*
 * 349. Write a program to replace spaces with a given character.
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
    for (char *p = s; *p; p++)
        if (*p == ' ') *p = c;
    printf("Result: %s\n", s);
    return 0;
}
