/* Remove every ordinary space from a string. */
#include <stdio.h>
int main(void)
{
    char s[101];
    int i, j = 0;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    for (i = 0; s[i] && s[i] != '\n'; i++)
        if (s[i] != ' ')
            s[j++] = s[i];
    s[j] = '\0';
    printf("Without spaces: %s\n", s);
    return 0;
}
