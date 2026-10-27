/*
 * 317. Write a program to find the maximum occurring character in a string.
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
    int freq[256] = {0}, best = 0;
    for (const char *p = s; *p; p++)
        if (!isspace((unsigned char)*p)) freq[(unsigned char)*p]++;
    for (int i = 1; i < 256; i++)
        if (freq[i] > freq[best]) best = i;
    if (freq[best]) printf("Maximum occurring character: '%c' (%d times)\n", best, freq[best]);
    else puts("No characters found");
    return 0;
}
