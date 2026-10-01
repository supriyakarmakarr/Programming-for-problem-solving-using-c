/* Count alphabetic consonants in an input line. */
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
        if (ch >= 'A' && ch <= 'Z')
            ch += 32;
        if (ch >= 'a' && ch <= 'z' && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
            count++;
    }
    printf("Consonant count = %d\n", count);
    return 0;
}
