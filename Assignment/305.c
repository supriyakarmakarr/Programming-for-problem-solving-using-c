/*
 * 305. Write a program to count the occurrence of a specific character in a string.
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
    int count = 0;
    for (const char *p = s; *p; p++)
        count += *p == c;
    printf("'%c' occurs %d time(s)\n", c, count);
    return 0;
}
