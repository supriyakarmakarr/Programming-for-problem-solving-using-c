// Write a program to take a number as input and print its square and cube
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter a number : ");
    scanf("%d",&a);
    b = a*a;
    c = a*a*a;
    printf("Squear of %d is %d\n",a,b);
    printf("Cube of %d is %d",a,c);
    return 0;
}

/*
alternative

#include <stdio.h>
#include <math.h>

int main() {
    int a;
    double b, c;

    printf("Enter a number: ");
    scanf("%d", &a);

    b = pow(a, 2);
    c = pow(a, 3);

    printf("Square of %d is %.0lf\n", a, b);
    printf("Cube of %d is %.0lf\n", a, c);

    return 0;
}
*/