/* Print the frequency of each distinct byte character in the input line. */
#include <stdio.h>
int main(void)
{
    char s[101];
    int freq[256] = {0}, shown[256] = {0}, i;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    for (i = 0; s[i] && s[i] != '\n'; i++)
        freq[(unsigned char)s[i]]++;
    printf("Character frequencies:\n");
    for (i = 0; s[i] && s[i] != '\n'; i++)
    {
        unsigned char ch = (unsigned char)s[i];
        if (!shown[ch])
        {
            if (ch == ' ')
                printf("[space]: %d\n", freq[ch]);
            else if (ch == '\t')
                printf("[tab]: %d\n", freq[ch]);
            else
                printf("%c: %d\n", ch, freq[ch]);
            shown[ch] = 1;
        }
    }
    return 0;
}
