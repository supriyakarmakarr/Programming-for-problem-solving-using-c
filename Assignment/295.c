/* Concatenate two strings without using built-in string functions. */
#include <stdio.h>
int main(void)
{
    char a[202], b[101];
    int i = 0, j = 0;
    printf("Enter first string (up to 100 characters): ");
    if (!fgets(a, 101, stdin))
        return 0;
    while (a[i] && a[i] != '\n')
        i++;
    a[i] = '\0';
    printf("Enter second string (up to 100 characters): ");
    if (!fgets(b, sizeof b, stdin))
        return 0;
    while (b[j] && b[j] != '\n')
        j++;
    b[j] = '\0';
    j = 0;
    while (b[j] && i < 200)
        a[i++] = b[j++];
    a[i] = '\0';
    printf("Concatenated string: %s\n", a);
    return 0;
}
