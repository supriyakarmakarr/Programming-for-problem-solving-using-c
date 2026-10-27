/*
 * 313. Write a program to swap two strings without using a temporary variable.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[2048], b[1024];
    printf("Enter first string: ");
    if (!fgets(a, 1024, stdin)) return 1;
    printf("Enter second string: ");
    if (!fgets(b, sizeof b, stdin)) return 1;
    a[strcspn(a, "\n")] = b[strcspn(b, "\n")] = '\0';

    size_t la = strlen(a);
    strcat(a, b);                                // a = a + b
    memcpy(b, a, la); b[la] = '\0';              // b = old a
    memmove(a, a + la, strlen(a + la) + 1);      // a = old b
    printf("After swap:\nFirst : %s\nSecond: %s\n", a, b);
    return 0;
}
