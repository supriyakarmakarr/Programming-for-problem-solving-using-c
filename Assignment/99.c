// Write a program to calculate LCM of two numbers using a loop.


#include <stdio.h>

int main()
{
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(int i = 1; ; i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("LCM = %d", lcm);

    return 0;
}