/*
 * 374. Write a program to determine whether a string can be rearranged to form a palindrome.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    int cnt[256] = {0}, odd = 0;
    for (const char *p = s; *p; p++)
        cnt[(unsigned char)*p]++;
    for (int i = 0; i < 256; i++)
        odd += cnt[i] & 1;
    puts(odd <= 1 ? "Can be rearranged into a palindrome" : "Cannot be rearranged into a palindrome");
    return 0;
}
