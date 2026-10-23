#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char s[128], *end;
    printf("Enter a number: ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    s[strcspn(s, "\n")] = 0;
    errno = 0;
    (void)strtod(s, &end);
    while (isspace((unsigned char)*end))
        end++;
    int ok = s[0] && end != s && !*end && errno != ERANGE;
    puts(ok ? "Valid numeric string." : "Invalid numeric string.");
    return 0;
}
