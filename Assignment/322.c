#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char email[MAX_LENGTH];
    size_t at_count = 0;
    char *at = NULL;
    printf("Enter an email address: ");
    if (fgets(email, sizeof email, stdin) == NULL)
        return 1;
    email[strcspn(email, "\n")] = '\0';
    for (size_t i = 0; email[i] != '\0'; ++i) {
        if (isspace((unsigned char)email[i])) {
            puts("Invalid email format.");
            return 0;
        }
        if (email[i] == '@') {
            ++at_count;
            at = &email[i];
        }
    }
    int valid = at_count == 1 && at != email && at[1] != '\0';
    if (valid) {
        char *dot = strrchr(at + 1, '.');
        valid = dot != NULL && dot > at + 1 && dot[1] != '\0';
    }
    puts(valid ? "Email format looks valid." : "Invalid email format.");
    return 0;
}
