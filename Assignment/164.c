/*
* * * * * * * * * 
* * * *   * * * * 
* * *       * * * 
* *           * * 
*               * 
* *           * * 
* * *       * * * 
* * * *   * * * * 
* * * * * * * * * 
*/



#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 9; i++)
    {
        for(j = 1; j <= 9; j++)
        {
            if(i == 1 || i == 9)
            {
                printf("* ");
            }
            else if(i == 2 || i == 8)
            {
                if(j <= 4 || j >= 6)
                    printf("* ");
                else
                    printf("  ");
            }
            else if(i == 3 || i == 7)
            {
                if(j <= 3 || j >= 7)
                    printf("* ");
                else
                    printf("  ");
            }
            else if(i == 4 || i == 6)
            {
                if(j <= 2 || j >= 8)
                    printf("* ");
                else
                    printf("  ");
            }
            else
            {
                if(j == 1 || j == 9)
                    printf("* ");
                else
                    printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}