/*
 * 350. Write a program to find the length of a string using pointer.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    const char *p = s;
    while (*p) p++;
    printf("Length: %td\n", p - s);
    return 0;
}
