/*
 * 308. Write a program to check whether a substring exists in a string.
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
    puts(strstr(s, t) ? "Substring exists" : "Substring does not exist");
    return 0;
}
