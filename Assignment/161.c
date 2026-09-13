/*
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
      * * * 
    * * * * * 
*/



#include <stdio.h>

int main()
{
    int i, j;

    // First upper part
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5 - i; j++)
            printf("  ");

        for(j = 1; j <= 2 * i - 1; j++)
            printf("* ");

        printf("\n");
    }

    // First lower part
    for(i = 4; i >= 1; i--)
    {
        for(j = 1; j <= 5 - i; j++)
            printf("  ");

        for(j = 1; j <= 2 * i - 1; j++)
            printf("* ");

        printf("\n");
    }

    // Bottom 2 lines
    for(i = 2; i <= 3; i++)
    {
        for(j = 1; j <= 5 - i; j++)
            printf("  ");

        for(j = 1; j <= 2 * i - 1; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}