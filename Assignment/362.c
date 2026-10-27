/*
 * 362. Write a program to find the lexicographically smallest rotation of a string.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    size_t n = strlen(s), i = 0, j = 1, k = 0;
    while (i < n && j < n && k < n) {
        char a = s[(i + k) % n], b = s[(j + k) % n];
        if (a == b) { k++; continue; }
        if (a > b) i += k + 1;
        else j += k + 1;
        if (i == j) j++;
        k = 0;
    }
    size_t start = i < j ? i : j;
    if (n) printf("Smallest rotation: %s%.*s\n", s + start, (int)start, s);
    return 0;
}
