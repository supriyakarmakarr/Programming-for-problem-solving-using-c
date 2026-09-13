/*
* * * * * * * * * * * * * * * * *
  * * * * * * *     * * * * * * *
    * * * * *         * * * * *
      * * *             * * *
        * * * * * * * * *
          * * * * * * *
            * * * * *
              * * *
                *
*/



#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 9; i++)
    {
        for(j = 1; j <= 17; j++)
        {
            if(i <= 4)
            {
                if((j >= i && j <= 9 - i) ||
                   (j >= 9 + i && j <= 18 - i))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            else
            {
                if(j >= i && j <= 18 - i)
                    printf("* ");
                else
                    printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}