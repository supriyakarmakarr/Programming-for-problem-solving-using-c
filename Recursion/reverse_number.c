#include <stdio.h>
int rev(int n, int r){
if(n == 0) return r;
return rev(n / 10, r * 10 + n % 10);
}

int main(void){
int n;
printf("Enter a number: ");
scanf("%d", &n);
printf("Reverse = %d", rev(n, 0));
return 0;
}