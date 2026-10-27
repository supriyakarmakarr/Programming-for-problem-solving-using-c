/*
 * 351. Write a program to sort the characters of a string.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    int cnt[256] = {0};
    for (const char *p = s; *p; p++)
        cnt[(unsigned char)*p]++;
    size_t j = 0;
    for (int c = 0; c < 256; c++)
        while (cnt[c]-- > 0) s[j++] = (char)c;
    printf("Sorted: %s\n", s);
    return 0;
}
