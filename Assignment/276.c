/* Reverse all characters in the input line. */
#include <stdio.h>
int main(void)
{
    char s[101], t;
    int n = 0, i;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    while (s[n] != '\0' && s[n] != '\n')
        n++;
    for (i = 0; i < n / 2; i++)
    {
        t = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = t;
    }
    s[n] = '\0';
    printf("Reversed string: %s\n", s);
    return 0;
}
