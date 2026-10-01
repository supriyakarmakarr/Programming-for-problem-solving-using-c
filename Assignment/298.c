/* Reverse the characters inside each word, keeping word order and spaces. */
#include <stdio.h>
int main(void)
{
    char s[101], t;
    int i = 0, j, k;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    while (s[i] && s[i] != '\n')
    {
        while (s[i] == ' ' || s[i] == '\t')
            i++;
        j = i;
        while (s[i] && s[i] != '\n' && s[i] != ' ' && s[i] != '\t')
            i++;
        k = i - 1;
        while (j < k)
        {
            t = s[j];
            s[j++] = s[k];
            s[k--] = t;
        }
    }
    printf("Each word reversed: %s", s);
    return 0;
}
