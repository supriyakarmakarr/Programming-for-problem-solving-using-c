/*
 * 355. Write a program to remove newline characters from a string.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[4096];
    printf("Enter text (end with Ctrl+D): ");
    size_t len = fread(s, 1, sizeof s - 1, stdin);
    s[len] = '\0';
    size_t j = 0;
    for (size_t i = 0; i < len; i++)
        if (s[i] != '\n' && s[i] != '\r') s[j++] = s[i];
    s[j] = '\0';
    printf("\nResult: %s\n", s);
    return 0;
}
