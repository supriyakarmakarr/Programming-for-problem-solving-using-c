/* Reverse word order while preserving the characters within each word. */
#include <stdio.h>
int main(void)
{
    char s[101], words[50][101];
    int count = 0, i = 0, j, k;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    while (s[i] && s[i] != '\n')
    {
        while (s[i] == ' ' || s[i] == '\t')
            i++;
        if (!s[i] || s[i] == '\n')
            break;
        j = 0;
        while (s[i] && s[i] != '\n' && s[i] != ' ' && s[i] != '\t' && j < 100)
            words[count][j++] = s[i++];
        words[count][j] = '\0';
        count++;
    }
    printf("Words in reverse order: ");
    for (k = count - 1; k >= 0; k--)
        printf("%s%s", words[k], k ? " " : "");
    printf("\n");
    return 0;
}
