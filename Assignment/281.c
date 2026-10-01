/* Count non-alphanumeric, non-whitespace characters. */
#include <stdio.h>
int main(void)
{
    char ch, s[101];
    int i, count = 0;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    for (i = 0; s[i] && s[i] != '\n'; i++)
    {
        ch = s[i];
        if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || ch == ' ' || ch == '\t'))
            count++;
    }
    printf("Special character count = %d\n", count);
    return 0;
}
