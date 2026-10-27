/*
 * 353. Write a program to count how many times a word appears in a string.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    char t[1024];
    printf("Enter word to count: ");
    if (!fgets(t, sizeof t, stdin)) return 1;
    t[strcspn(t, "\n")] = '\0';
    int count = 0;
    for (char *w = strtok(s, " "); w; w = strtok(NULL, " "))
        count += strcmp(w, t) == 0;
    printf("\"%s\" appears %d time(s)\n", t, count);
    return 0;
}
