/* Count whitespace-separated words in an input line. */
#include <stdio.h>
int main(void)
{
    char s[101];
    int i, count = 0, inWord = 0;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    for (i = 0; s[i] && s[i] != '\n'; i++)
    {
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\r')
        {
            if (!inWord)
                count++;
            inWord = 1;
        }
        else
            inWord = 0;
    }
    printf("Word count = %d\n", count);
    return 0;
}
