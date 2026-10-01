/* Check whether two input strings are anagrams, ignoring spaces and case. */
#include <stdio.h>
int main(void)
{
    char a[101], b[101], ch;
    int freq[256] = {0}, i, ok = 1;
    printf("Enter first string: ");
    if (!fgets(a, sizeof a, stdin))
        return 0;
    printf("Enter second string: ");
    if (!fgets(b, sizeof b, stdin))
        return 0;
    for (i = 0; a[i] && a[i] != '\n'; i++)
    {
        ch = a[i];
        if (ch == ' ' || ch == '\t')
            continue;
        if (ch >= 'A' && ch <= 'Z')
            ch += 32;
        freq[(unsigned char)ch]++;
    }
    for (i = 0; b[i] && b[i] != '\n'; i++)
    {
        ch = b[i];
        if (ch == ' ' || ch == '\t')
            continue;
        if (ch >= 'A' && ch <= 'Z')
            ch += 32;
        freq[(unsigned char)ch]--;
    }
    for (i = 0; i < 256; i++)
        if (freq[i])
            ok = 0;
    printf("%s\n", ok ? "The strings are anagrams." : "The strings are not anagrams.");
    return 0;
}
