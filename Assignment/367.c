/*
 * 367. Write a program to validate a password based on given rules.
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
    int upper = 0, lower = 0, digit = 0, special = 0, space = 0;
    for (const char *p = s; *p; p++) {
        upper |= isupper((unsigned char)*p) != 0;
        lower |= islower((unsigned char)*p) != 0;
        digit |= isdigit((unsigned char)*p) != 0;
        special |= ispunct((unsigned char)*p) != 0;
        space |= isspace((unsigned char)*p) != 0;
    }
    int ok = strlen(s) >= 8 && upper && lower && digit && special && !space;
    puts(ok ? "Valid password" : "Invalid password. Rules: 8+ characters, an uppercase, a lowercase, a digit, a special character, no spaces");
    return 0;
}
