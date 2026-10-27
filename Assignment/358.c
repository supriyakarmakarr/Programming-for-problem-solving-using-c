/*
 * 358. Write a program to convert a numeric string into an integer.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    const char *p = s;
    while (isspace((unsigned char)*p)) p++;
    int neg = *p == '-';
    if (*p == '-' || *p == '+') p++;
    long long r = 0;
    for (; isdigit((unsigned char)*p); p++) {
        r = r * 10 + (*p - '0');
        if (r > (long long)INT_MAX + neg) { r = (long long)INT_MAX + neg; break; }   // clamp on overflow
    }
    printf("Integer value: %lld\n", neg ? -r : r);
    return 0;
}
