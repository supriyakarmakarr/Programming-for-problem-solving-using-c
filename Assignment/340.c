/*
 * 340. Write a program to count the number of sentences in a string.
 */

#include <stdio.h>
#include <string.h>

#define END(c) ((c) && strchr(".!?", (c)))

int main(void)
{
    char s[1024];
    printf("Enter string: ");
    if (!fgets(s, sizeof s, stdin)) return 1;
    s[strcspn(s, "\n")] = '\0';
    int count = 0;
    for (size_t i = 0; s[i]; i++)
        count += END(s[i]) && !END(s[i + 1]);       // a run like "..." or "?!" counts once
    printf("Number of sentences: %d\n", count);
    return 0;
}
