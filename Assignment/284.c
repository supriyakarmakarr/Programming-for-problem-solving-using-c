/* Convert uppercase letters in a string to lowercase. */
#include <stdio.h>
int main(void)
{
    char s[101];
    int i;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    for (i = 0; s[i] && s[i] != '\n'; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    printf("Lowercase string: %s", s);
    return 0;
}
