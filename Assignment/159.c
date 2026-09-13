/*
*                               *   
*   *                       *   *   
*   *   *               *   *   *   
*   *   *   *       *   *   *   *   
*   *   *   *   *   *   *   *   *   
*   *   *   *       *   *   *   *   
*   *   *               *   *   *   
*   *                       *   *   
*                               *   
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for(i = 1; i <= 9; i++)
    {
        for(j = 1; j <= 9; j++)
        {
            if(abs(j - 5) >= abs(i - 5))
                printf("*   ");
            else
                printf("    ");
        }

        printf("\n");
    }

    return 0;
}