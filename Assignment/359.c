/*
 * 359. Write a program to check whether a string represents a valid number.
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
    const char *p = s;
    if (*p == '+' || *p == '-') p++;
    int digits = 0, dot = 0;
    for (; isdigit((unsigned char)*p) || (*p == '.' && !dot); p++) {
        if (*p == '.') dot = 1;
        else digits++;
    }
    puts(digits && !*p ? "Valid number" : "Not a valid number");
    return 0;
}
