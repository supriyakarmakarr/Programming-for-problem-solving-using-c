#include <stdio.h>
#include<string.h>

int main(void){
    char s[100];
    puts("Enter a string :");
    fgets(s,sizeof(s),stdin);
    puts("The string is :");
    puts(s);
    int size = 0, k = 0;
    while(s[k] != '\0'){
        size++;
        k++;
    }
    for(int i= 0,j = size-1;i<=j;i++,j--){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    puts("The reverse string is :");
    puts(s);
    return 0;
}