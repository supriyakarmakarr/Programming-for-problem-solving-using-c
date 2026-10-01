/* Check whether a line is a palindrome, ignoring spaces and letter case. */
#include <stdio.h>
int main(void)
{
    char s[101];
    int left = 0, right = 0, ok = 1;
    printf("Enter a string (up to 100 characters): ");
    if (!fgets(s, sizeof s, stdin))
        return 0;
    while (s[right] != '\0' && s[right] != '\n')
        right++;
    right--;
    while (left < right)
    {
        char a = s[left], b = s[right];
        if (a == ' ' || a == '\t')
        {
            left++;
            continue;
        }
        if (b == ' ' || b == '\t')
        {
            right--;
            continue;
        }
        if (a >= 'A' && a <= 'Z')
            a += 32;
        if (b >= 'A' && b <= 'Z')
            b += 32;
        if (a != b)
        {
            ok = 0;
            break;
        }
        left++;
        right--;
    }
    printf("%s\n", ok ? "The string is a palindrome." : "The string is not a palindrome.");
    return 0;
}
