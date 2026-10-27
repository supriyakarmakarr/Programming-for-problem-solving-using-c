
#include <stdio.h>

int maze(int cr, int cc, int er, int ec) {
    if (cr == er && cc == ec) return 1;

    int RightWays = 0;
    int Downways = 0;

    if (cr == er) {
        RightWays += maze(cr, cc + 1, er, ec);
    }
    else if (cc == ec) {
        Downways += maze(cr + 1, cc, er, ec);
    }
    else {
        RightWays += maze(cr, cc + 1, er, ec);
        Downways += maze(cr + 1, cc, er, ec);
    }

    return RightWays + Downways;
}

int main(void) {
    int n, m;

    printf("Enter number of rows of maze: ");
    scanf("%d", &n);

    printf("Enter number of columns of maze: ");
    scanf("%d", &m);

    printf("Number of ways = %d", maze(1, 1, n, m));

    return 0;
}
