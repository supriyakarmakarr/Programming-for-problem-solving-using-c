/* Convert lowercase letters in a string to uppercase. */
#include <stdio.h>
int main(void)
{
    char s[101];
    int i;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    for (i = 0; s[i] && s[i] != '\n'; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    printf("Uppercase string: %s", s);
    return 0;
}
