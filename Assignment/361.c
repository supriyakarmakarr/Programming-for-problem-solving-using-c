/*
 * 361. Write a program to generate all substrings of a string.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    for (size_t i = 0; s[i]; i++)
        for (size_t len = 1; s[i + len - 1]; len++)
            printf("%.*s\n", (int)len, s + i);
    return 0;
}
