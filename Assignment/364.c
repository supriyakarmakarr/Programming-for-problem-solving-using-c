/*
 * 364. Write a program to detect repeated patterns in a string.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    size_t n = strlen(s), fail[1024] = {0};
    for (size_t i = 1, k = 0; i < n; i++) {         // KMP failure function
        while (k && s[i] != s[k]) k = fail[k - 1];
        if (s[i] == s[k]) k++;
        fail[i] = k;
    }
    size_t p = n ? n - fail[n - 1] : 0;              // smallest period
    if (n && p < n && n % p == 0) printf("Repeated pattern \"%.*s\" x %zu\n", (int)p, s, n / p);
    else puts("No repeated pattern");
    return 0;
}
