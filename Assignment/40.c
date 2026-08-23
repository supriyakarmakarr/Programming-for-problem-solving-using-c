/*Write a program to check password strength:
Weak: < 6 chars
Moderate: 6-10 chars with letters only
Strong: 6-10 chars with letters and digits
Very Strong: > 10 chars with letters, digits, special chars*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int len, letters = 0, digits = 0, special = 0;

    printf("Enter password: ");
    scanf("%s", password);

    len = strlen(password);

    for (int i = 0; i < len; i++) {
        if (isalpha(password[i]))
            letters++;
        else if (isdigit(password[i]))
            digits++;
        else
            special++;
    }

    if (len < 6)
        printf("Weak");
    else if (len <= 10 && letters == len)
        printf("Moderate");
    else if (len <= 10 && letters > 0 && digits > 0 && special == 0)
        printf("Strong");
    else if (len > 10 && letters > 0 && digits > 0 && special > 0)
        printf("Very Strong");
    else
        printf("Weak");

    return 0;
}