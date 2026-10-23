#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char s[128], *end;
    printf("Enter an integer string: ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    s[strcspn(s, "\n")] = 0;
    errno = 0;
    long v = strtol(s, &end, 10);
    while (*end == ' ' || *end == '\t' || *end == '\r')
        end++;
    if (!s[0] || end == s || *end || errno == ERANGE || v < INT_MIN || v > INT_MAX) {
        puts("Invalid or out-of-range integer.");
        return 1;
    }
    printf("Integer value: %d\n", (int)v);
    return 0;
}
