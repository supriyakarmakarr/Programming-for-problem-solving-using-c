#include <ctype.h>
#include <stdio.h>
#define MAX_LENGTH 512
int main(void) {
    char s[MAX_LENGTH];
    size_t u = 0, l = 0, d = 0, ws = 0, p = 0, o = 0;
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    for (size_t i = 0; s[i] && s[i] != '\n'; i++) {
        unsigned char c = (unsigned char)s[i];
        if (isupper(c))
            u++;
        else if (islower(c))
            l++;
        else if (isdigit(c))
            d++;
        else if (isspace(c))
            ws++;
        else if (ispunct(c))
            p++;
        else
            o++;
    }
    printf("Uppercase: %zu\nLowercase: %zu\nDigits: %zu\nWhitespace: %zu\nPunctuation: %zu\nOther: "
           "%zu\n",
           u, l, d, ws, p, o);
    return 0;
}
