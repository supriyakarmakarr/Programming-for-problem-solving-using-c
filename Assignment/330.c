/*
 * 330. Write a program to compress a string using character frequency.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    printf("Compressed: ");
    for (size_t i = 0, j; s[i]; i = j) {
        for (j = i; s[j] == s[i]; j++);
        printf("%c%zu", s[i], j - i);
    }
    putchar('\n');
    return 0;
}
