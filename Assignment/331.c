/*
 * 331. Write a program to decompress a compressed string.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    printf("Decompressed: ");
    for (const char *p = s; *p; ) {
        char ch = *p++;
        char *end;
        for (long k = strtol(p, &end, 10); k > 0; k--)
            putchar(ch);
        p = end;
    }
    putchar('\n');
    return 0;
}
