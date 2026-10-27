/*
 * 365. Write a program to replace multiple spaces with a single space.
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
    for (size_t i = 0; s[i]; i++)
        if (s[i] != ' ' || j == 0 || s[j - 1] != ' ') s[j++] = s[i];
    s[j] = '\0';
    printf("Result: \"%s\"\n", s);
    return 0;
}
