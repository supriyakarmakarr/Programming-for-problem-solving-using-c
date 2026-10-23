#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(void) {
    char text[MAX_LENGTH];
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    text[strcspn(text, "\n")] = '\0';
    size_t left = 0, right = strlen(text);
    int palindrome = 1;
    while (left < right) {
        while (left < right && isspace((unsigned char)text[left]))
            ++left;
        while (left < right && isspace((unsigned char)text[right - 1]))
            --right;
        if (left < right &&
            tolower((unsigned char)text[left]) != tolower((unsigned char)text[right - 1])) {
            palindrome = 0;
            break;
        }
        ++left;
        --right;
    }
    puts(palindrome ? "The string is a palindrome." : "The string is not a palindrome.");
    return 0;
}
