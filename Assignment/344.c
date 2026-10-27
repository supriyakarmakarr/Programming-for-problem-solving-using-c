/*
 * 344. Write a program to check whether a string has balanced parentheses.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    char stack[1024];
    size_t top = 0;
    int ok = 1;
    for (const char *p = s; *p && ok; p++) {
        if (strchr("([{", *p)) stack[top++] = *p;
        else if (strchr(")]}", *p)) {
            char open = *p == ')' ? '(' : *p == ']' ? '[' : '{';
            ok = top && stack[--top] == open;
        }
    }
    puts(ok && !top ? "Balanced" : "Not balanced");
    return 0;
}
