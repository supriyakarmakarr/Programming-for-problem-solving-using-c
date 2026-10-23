#include <stdio.h>
#define MAX_LENGTH 256
int main(void) {
    char s[MAX_LENGTH];
    int count[256] = {0}, odd = 0;
    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin))
        return 1;
    for (size_t i = 0; s[i] && s[i] != '\n'; i++)
        count[(unsigned char)s[i]]++;
    for (size_t i = 0; i < 256; i++)
        odd += count[i] % 2;
    puts(odd <= 1 ? "Can be rearranged into a palindrome."
                  : "Cannot be rearranged into a palindrome.");
    return 0;
}
