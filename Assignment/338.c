/*
 * 338. Write a program to split a string into characters, words, and lines.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[4096];
    printf("Enter text (end with Ctrl+D): ");
    size_t len = fread(s, 1, sizeof s - 1, stdin);
    s[len] = '\0';
    char tmp[4096];

    printf("Characters:");
    for (size_t i = 0; i < len; i++) {
        putchar(' ');
        if (s[i] == '\n') fputs("\\n", stdout);
        else putchar(s[i]);
    }

    strcpy(tmp, s);
    printf("\nWords:\n");
    for (char *w = strtok(tmp, " \t\n"); w; w = strtok(NULL, " \t\n"))
        printf("  %s\n", w);

    strcpy(tmp, s);
    printf("Lines:\n");
    for (char *l = strtok(tmp, "\n"); l; l = strtok(NULL, "\n"))
        printf("  %s\n", l);
    return 0;
}
