#include <stdio.h>
#include <string.h>

void rev(char s[], int i){
    if(i < 0) return;
    printf("%c", s[i]);
    rev(s, i - 1);
}

int main(void){
    char s[100];
    printf("Enter a string: ");
    scanf("%99s", s);
    rev(s, strlen(s) - 1);

    return 0;
}