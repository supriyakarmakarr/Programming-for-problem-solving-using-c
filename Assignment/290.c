/* Replace each vowel with a character provided by the user. */
#include <stdio.h>
int main(void)
{
    char s[101], replacement, ch;
    int i;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    printf("Enter replacement character: ");
    if (scanf(" %c", &replacement) != 1)
        return 0;
    for (i = 0; s[i] && s[i] != '\n'; i++)
    {
        ch = s[i];
        if (ch >= 'A' && ch <= 'Z')
            ch += 32;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            s[i] = replacement;
    }
    printf("Result: %s", s);
    return 0;
}
