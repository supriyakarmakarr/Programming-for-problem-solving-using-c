/* List characters that occur more than once, once per distinct character. */
#include <stdio.h>
int main(void)
{
    char s[101];
    int freq[256] = {0}, shown[256] = {0}, i, found = 0;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    for (i = 0; s[i] && s[i] != '\n'; i++)
        freq[(unsigned char)s[i]]++;
    printf("Duplicate characters: ");
    for (i = 0; s[i] && s[i] != '\n'; i++)
    {
        unsigned char ch = (unsigned char)s[i];
        if (freq[ch] > 1 && !shown[ch])
        {
            if (ch == ' ')
                printf("[space] ");
            else
                printf("%c ", ch);
            shown[ch] = 1;
            found = 1;
        }
    }
    if (!found)
        printf("none");
    printf("\n");
    return 0;
}
