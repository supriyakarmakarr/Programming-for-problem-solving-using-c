/* Find the last character that occurs exactly once. */
#include <stdio.h>
int main(void)
{
    char s[101];
    int freq[256] = {0}, i, last = -1;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    for (i = 0; s[i] && s[i] != '\n'; i++)
        freq[(unsigned char)s[i]]++;
    for (i = 0; s[i] && s[i] != '\n'; i++)
        if (freq[(unsigned char)s[i]] == 1)
            last = i;
    if (last < 0)
        printf("No non-repeating character.\n");
    else
        printf("Last non-repeating character: %c\n", s[last]);
    return 0;
}
