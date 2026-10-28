#include <stdio.h>
int sum(int n){
if(n == 0) return 0;
return n%10 + sum(n/10);
}

int main(void){
int n;
printf("Enter a number: ");
scanf("%d", &n);
printf("Sum = %d", sum(n));
return 0;
}