/*
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
*/


#include <stdio.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        for(j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}