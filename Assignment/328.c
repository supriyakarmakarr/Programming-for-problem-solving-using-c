
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[256], longest[256] = "";
    int i, l, r, n, len;

    printf("Enter a string: ");
    if (fgets(s, sizeof(s), stdin) == NULL)
        return 1;

    s[strcspn(s, "\n")] = '\0';
    n = strlen(s);

    for (i = 0; i < n; i++) {
        for (int k = 0; k < 2; k++) {
            l = i;
            r = i + k;

            while (l >= 0 && r < n && s[l] == s[r]) {
                len = r - l + 1;

                if (len > strlen(longest)) {
                    strncpy(longest, s + l, len);
                    longest[len] = '\0';
                }

                l--;
                r++;
            }
        }
    }

    printf("Longest palindromic substring: %s\n", longest);
    return 0;
}
