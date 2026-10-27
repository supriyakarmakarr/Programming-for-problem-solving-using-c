/*
 * 371. Write a program to convert a sentence into snake_case.
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
    char out[2048];
    size_t j = 0;
    int sep = 0;
    for (const char *p = s; *p; p++) {
        if (!isalnum((unsigned char)*p)) { sep = 1; continue; }
        if (sep && j) out[j++] = '_';
        out[j++] = (char)tolower((unsigned char)*p);
        sep = 0;
    }
    out[j] = '\0';
    printf("snake_case: %s\n", out);
    return 0;
}
