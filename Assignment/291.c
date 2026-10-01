/* Find the first character that occurs exactly once. */
#include <stdio.h>
int main(void)
{
    char s[101];
    int freq[256] = {0}, i, found = 0;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    for (i = 0; s[i] && s[i] != '\n'; i++)
        freq[(unsigned char)s[i]]++;
    for (i = 0; s[i] && s[i] != '\n'; i++)
        if (freq[(unsigned char)s[i]] == 1)
        {
            printf("First non-repeating character: %c\n", s[i]);
            found = 1;
            break;
        }
    if (!found)
        printf("No non-repeating character.\n");
    return 0;
}
