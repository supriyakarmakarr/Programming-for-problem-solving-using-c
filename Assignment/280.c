/* Count digit characters in a string. */
#include <stdio.h>
int main(void)
{
    char s[101];
    int i, count = 0;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    for (i = 0; s[i] && s[i] != '\n'; i++)
        if (s[i] >= '0' && s[i] <= '9')
            count++;
    printf("Digit count = %d\n", count);
    return 0;
}
