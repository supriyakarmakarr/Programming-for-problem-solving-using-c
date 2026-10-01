/* Compare two input lines without using built-in string functions. */
#include <stdio.h>
int main(void)
{
    char a[101], b[101];
    int i = 0, result;
    printf("Enter first string: ");
    if (!fgets(a, sizeof a, stdin))
        return 0;
    printf("Enter second string: ");
    if (!fgets(b, sizeof b, stdin))
        return 0;
    while (a[i] && a[i] != '\n' && b[i] && b[i] != '\n' && a[i] == b[i])
        i++;
    if ((a[i] == '\n' || a[i] == '\0') && (b[i] == '\n' || b[i] == '\0'))
        result = 0;
    else
        result = (unsigned char)a[i] < (unsigned char)b[i] ? -1 : 1;
    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("First string is lexicographically smaller.\n");
    else
        printf("First string is lexicographically greater.\n");
    return 0;
}
