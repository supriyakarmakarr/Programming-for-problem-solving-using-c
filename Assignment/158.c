/*
*                   * 
* * *           * * * 
* * * * *   * * * * * 
* * * * * * * * * * *
*/



#include <stdio.h>

int main()
{
    int i, j, k;

    for(i = 1; i <= 4; i++)
    {
        // Left stars
        for(j = 1; j <= 2*i-1; j++)
            printf("* ");

        // Middle spaces
        for(k = 1; k <= 13 - 4*i; k++)
            printf("  ");

        // Right stars
        for(j = 1; j <= 2*i-1; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}