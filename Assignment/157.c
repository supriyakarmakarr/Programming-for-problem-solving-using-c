/*
* * * * * * * * * * * * * 
   * * * * * * * * * 
      * * * * * 
         * 
*/




#include <stdio.h>

int main()
{
    int i, j, k;

    for(i = 13; i >= 1; i -= 4)
    {
        for(k = 13; k > i; k -= 4)
            printf("   ");

        for(j = 1; j <= i; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}