/* Toggle the case of every English letter in a string. */
#include <stdio.h>
int main(void)
{
    char s[101];
    int i;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    for (i = 0; s[i] && s[i] != '\n'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    printf("Toggled string: %s", s);
    return 0;
}
