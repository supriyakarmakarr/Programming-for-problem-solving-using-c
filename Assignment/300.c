/* Remove every occurrence of a user-specified character from a string. */
#include <stdio.h>
int main(void)
{
    char s[101], target;
    int i, j = 0;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    printf("Enter character to remove: ");
    if (scanf("%c", &target) != 1)
        return 0;
    for (i = 0; s[i] && s[i] != '\n'; i++)
        if (s[i] != target)
            s[j++] = s[i];
    s[j] = '\0';
    printf("Result: %s\n", s);
    return 0;
}
