/* Keep only the first occurrence of each character in a string. */
#include <stdio.h>
int main(void)
{
    char s[101];
    int seen[256] = {0}, i, j = 0;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    for (i = 0; s[i] && s[i] != '\n'; i++)
    {
        unsigned char ch = (unsigned char)s[i];
        if (!seen[ch])
        {
            seen[ch] = 1;
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
    printf("After removing duplicate characters: %s\n", s);
    return 0;
}
