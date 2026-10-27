/*
 * 307. Write a program to check whether a string ends with a given substring.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    char t[1024];
    printf("Enter substring: ");
    if (!fgets(t, sizeof t, stdin)) return 1;
    t[strcspn(t, "\n")] = '\0';
    size_t ls = strlen(s), lt = strlen(t);
    puts(ls >= lt && strcmp(s + ls - lt, t) == 0 ? "String ends with the substring" : "String does not end with the substring");
    return 0;
}
