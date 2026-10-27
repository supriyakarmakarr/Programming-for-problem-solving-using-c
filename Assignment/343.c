/*
 * 343. Write a program to rotate a string right by k positions.
 */

#include <stdio.h>
#include <string.h>

static void reverse(char *s, size_t l, size_t r)
{
    while (l < r) {
        char tmp = s[l];
        s[l++] = s[r];
        s[r--] = tmp;
    }
}

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    long k;
    printf("Enter k: ");
    if (scanf("%ld", &k) != 1) return 1;
    size_t n = strlen(s);
    if (n) {
        size_t r = (size_t)(((-k % (long)n) + (long)n) % (long)n);   // right by k = left by n-k
        if (r) {
            reverse(s, 0, r - 1);
            reverse(s, r, n - 1);
            reverse(s, 0, n - 1);
        }
    }
    printf("Rotated right: %s\n", s);
    return 0;
}
