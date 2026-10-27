/*
 * 319. Write a program to count uppercase and lowercase letters separately.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    int upper = 0, lower = 0;
    for (const char *p = s; *p; p++) {
        upper += isupper((unsigned char)*p) != 0;
        lower += islower((unsigned char)*p) != 0;
    }
    printf("Uppercase: %d\nLowercase: %d\n", upper, lower);
    return 0;
}
