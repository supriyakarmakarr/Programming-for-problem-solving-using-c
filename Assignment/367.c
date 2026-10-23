#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char p[MAX_LENGTH];
    int upper = 0, lower = 0, digit = 0, special = 0;
    printf("Enter a password: ");
    if (!fgets(p, sizeof p, stdin))
        return 1;
    p[strcspn(p, "\n")] = 0;
    size_t n = strlen(p);
    for (size_t i = 0; i < n; i++) {
        unsigned char c = (unsigned char)p[i];
        upper |= isupper(c) != 0;
        lower |= islower(c) != 0;
        digit |= isdigit(c) != 0;
        special |= !isalnum(c);
    }
    int ok = n >= 8 && upper && lower && digit && special;
    puts(ok ? "Password meets the rules."
            : "Use at least 8 characters with uppercase, lowercase, a digit, and a special "
              "character.");
    return 0;
}
