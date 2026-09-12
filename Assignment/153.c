/*
      1
    2 3 4
  5 6 7 8 9
  */

#include <stdio.h>

int main()
{
    int i, j, k = 1;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d", k++);
        }
        printf("\n");
    }
    return 0;
}