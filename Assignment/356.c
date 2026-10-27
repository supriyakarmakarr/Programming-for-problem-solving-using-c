/*
 * 356. Write a program to justify text to a given width.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int width;
    char text[1024];
    printf("Enter width: ");
    if (scanf("%d ", &width) != 1 || width < 1) return 1;
    printf("Enter text: ");
    if (!fgets(text, sizeof text, stdin)) return 1;

    char *w[512];
    int n = 0;
    for (char *tok = strtok(text, " \n"); tok && n < 512; tok = strtok(NULL, " \n"))
        w[n++] = tok;

    for (int i = 0, j; i < n; i = j) {
        int len = 0;
        for (j = i; j < n && len + (int)strlen(w[j]) + (j - i) <= width; j++)
            len += (int)strlen(w[j]);
        if (j == i) len = (int)strlen(w[j++]);            // word longer than width
        int gaps = j - i - 1, spaces = width - len;
        for (int k = i; k < j; k++) {
            fputs(w[k], stdout);
            if (k == j - 1) break;
            if (j == n || gaps == 0) putchar(' ');       // last line: left-justified
            else printf("%*s", spaces / gaps + (k - i < spaces % gaps), "");
        }
        putchar('\n');
    }
    return 0;
}
