/* Find string length by scanning characters, without string library functions. */
#include <stdio.h>
int main(void)
{
    char s[101];
    int length = 0;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    while (s[length] != '\0' && s[length] != '\n')
        length++;
    printf("String length = %d\n", length);
    return 0;
}
