// Write a program to check whether two numbers are co-prime.



#include <stdio.h>

int main()
{
    int a, b, i, hcf = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    if (hcf == 1)
        printf("%d and %d are Co-Prime numbers", a, b);
    else
        printf("%d and %d are not Co-Prime numbers", a, b);

    return 0;
}