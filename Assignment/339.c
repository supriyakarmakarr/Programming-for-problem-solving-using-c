/*
 * 339. Write a program to check palindrome ignoring spaces and case.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    int ok = 1;
    for (size_t i = 0, j = strlen(s); i < j; ) {
        if (isspace((unsigned char)s[i])) i++;
        else if (isspace((unsigned char)s[j - 1])) j--;
        else if (tolower((unsigned char)s[i++]) != tolower((unsigned char)s[--j])) { ok = 0; break; }
    }
    puts(ok ? "Palindrome" : "Not a palindrome");
    return 0;
}
