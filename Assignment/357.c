/*
 * 357. Write a program to wrap text after a fixed number of characters.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    size_t k;
    printf("Enter line width: ");
    if (scanf("%zu", &k) != 1 || k == 0) return 1;
    for (size_t i = 0; s[i]; i++) {
        putchar(s[i]);
        if ((i + 1) % k == 0 && s[i + 1]) putchar('\n');
    }
    putchar('\n');
    return 0;
}
