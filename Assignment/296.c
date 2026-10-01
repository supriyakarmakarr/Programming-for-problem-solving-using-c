/* Print the longest whitespace-separated word in a line. */
#include <stdio.h>
int main(void)
{
    char s[101];
    int i = 0, start = 0, bestStart = 0, bestLen = 0, len;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    while (s[i] && s[i] != '\n')
    {
        while (s[i] == ' ' || s[i] == '\t')
            i++;
        start = i;
        while (s[i] && s[i] != '\n' && s[i] != ' ' && s[i] != '\t')
            i++;
        len = i - start;
        if (len > bestLen)
        {
            bestLen = len;
            bestStart = start;
        }
    }
    if (bestLen == 0)
        printf("No word found.\n");
    else
    {
        printf("Longest word: ");
        for (i = 0; i < bestLen; i++)
            putchar(s[bestStart + i]);
        printf("\nLength = %d\n", bestLen);
    }
    return 0;
}
