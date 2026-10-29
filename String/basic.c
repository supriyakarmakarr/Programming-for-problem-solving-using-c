#include <stdio.h>

int main(void){
    char s[] = "There are infinity chance.";
    int i =0;
    while (s[i] != '\0'){
        printf("%c",s[i]);
        i++;
    }
    return 0;
}