/*
 * 341. Write a program to count punctuation marks in a string.
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
    int count = 0;
    for (const char *p = s; *p; p++)
        count += ispunct((unsigned char)*p) != 0;
    printf("Punctuation marks: %d\n", count);
    return 0;
}
