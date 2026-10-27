/*
 * 348. Write a program to check whether a string has all unique characters.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    unsigned char seen[256] = {0};
    int ok = 1;
    for (const unsigned char *p = (const unsigned char *)s; *p; p++)
        if (seen[*p]++) { ok = 0; break; }
    puts(ok ? "All characters are unique" : "Duplicate characters found");
    return 0;
}
