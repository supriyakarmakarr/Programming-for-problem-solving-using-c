/*Write a program to check whether the given number wins or loses. Rule: A number
wins the game if it has exactly 6 factors.*/



#include <stdio.h>

int main()
{
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
    }

    if(count == 6)
        printf("Wins");
    else
        printf("Loses");

    return 0;
}