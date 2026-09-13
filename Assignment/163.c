/*
* * * * * * * * * * * * * * * * * * * * * * * * * 
  *           *   *           *   *           *   
    *       *       *       *       *       *     
      *   *           *   *           *   *       
        *               *               *         
      *   *           *   *           *   *       
    *       *       *       *       *       *     
  *           *   *           *   *           *   
* * * * * * * * * * * * * * * * * * * * * * * * * 
*/



#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 9; i++)
    {
        for(j = 1; j <= 25; j++)
        {
            if(i == 1 || i == 9)
            {
                printf("* ");
            }
            else if(i == 2 || i == 8)
            {
                if(j == 2 || j == 8 ||
                   j == 10 || j == 16 ||
                   j == 18 || j == 24)
                    printf("* ");
                else
                    printf("  ");
            }
            else if(i == 3 || i == 7)
            {
                if(j == 3 || j == 7 ||
                   j == 11 || j == 15 ||
                   j == 19 || j == 23)
                    printf("* ");
                else
                    printf("  ");
            }
            else if(i == 4 || i == 6)
            {
                if(j == 4 || j == 6 ||
                   j == 12 || j == 14 ||
                   j == 20 || j == 22)
                    printf("* ");
                else
                    printf("  ");
            }
            else
            {
                if(j == 5 || j == 13 || j == 21)
                    printf("* ");
                else
                    printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}