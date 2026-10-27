/*
 * 324. Write a program to sort characters of a string alphabetically.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int cmp(const void *a, const void *b)
{
    unsigned char x = *(const unsigned char *)a, y = *(const unsigned char *)b;
    return (x > y) - (x < y);
}
int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    qsort(s, strlen(s), 1, cmp);
    printf("Sorted: %s\n", s);
    return 0;
}
