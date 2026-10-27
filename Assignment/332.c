/*
 * 332. Write a program to check whether two strings are rotations of each other.
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
    printf("Enter second string: ");
    if (!fgets(t, sizeof t, stdin)) return 1;
    t[strcspn(t, "\n")] = '\0';
    char twice[2048];
    snprintf(twice, sizeof twice, "%s%s", s, s);
    puts(strlen(s) == strlen(t) && strstr(twice, t) ? "Strings are rotations of each other" : "Strings are not rotations");
    return 0;
}
