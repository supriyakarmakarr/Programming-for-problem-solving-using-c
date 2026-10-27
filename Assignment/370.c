/*
 * 370. Write a program to convert a sentence into camelCase.
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
    char out[1024];
    size_t j = 0;
    int up = 0;
    for (const char *p = s; *p; p++) {
        if (!isalnum((unsigned char)*p)) { up = 1; continue; }
        int c = j && up ? toupper((unsigned char)*p) : tolower((unsigned char)*p);
        out[j++] = (char)c;
        up = 0;
    }
    out[j] = '\0';
    printf("camelCase: %s\n", out);
    return 0;
}
