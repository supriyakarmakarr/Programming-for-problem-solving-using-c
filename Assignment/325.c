/*
 * 325. Write a program to sort words in a string lexicographically.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int cmp(const void *a, const void *b)
{
    return strcmp(*(char *const *)a, *(char *const *)b);
}
int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    char *w[512];
    int n = 0;
    for (char *tok = strtok(s, " "); tok && n < 512; tok = strtok(NULL, " "))
        w[n++] = tok;
    qsort(w, n, sizeof *w, cmp);
    printf("Sorted words:");
    for (int i = 0; i < n; i++)
        printf(" %s", w[i]);
    putchar('\n');
    return 0;
}
