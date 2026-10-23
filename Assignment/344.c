#include <stdio.h>
#define MAX_LENGTH 512
int main(void) {
    char text[MAX_LENGTH], stack[MAX_LENGTH];
    size_t top = 0;
    int balanced = 1;
    printf("Enter an expression: ");
    if (fgets(text, sizeof text, stdin) == NULL)
        return 1;
    for (size_t i = 0; text[i] != '\0'; ++i) {
        char ch = text[i];
        if (ch == '(' || ch == '[' || ch == '{')
            stack[top++] = ch;
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (top == 0) {
                balanced = 0;
                break;
            }
            char open = stack[--top];
            if (!((open == '(' && ch == ')') || (open == '[' && ch == ']') ||
                  (open == '{' && ch == '}'))) {
                balanced = 0;
                break;
            }
        }
    }
    balanced = balanced && top == 0;
    puts(balanced ? "Parentheses are balanced." : "Parentheses are not balanced.");
    return 0;
}
