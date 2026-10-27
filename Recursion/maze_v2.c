
#include <stdio.h>

int maze(int n,int m) {
    int RightWays = 0;
    int Downways = 0;
    if ( n==1 && m==1) return 1;
    if(n==1){
        RightWays += maze(n,m-1);
    }
    if(m==1){
        Downways += maze (n-1,m);
    }
    if(n>1 && m>1){
        RightWays += maze(n,m-1);
        Downways += maze (n-1,m);
    }
}

int main(void) {
    int n, m;

    printf("Enter number of rows of maze: ");
    scanf("%d", &n);

    printf("Enter number of columns of maze: ");
    scanf("%d", &m);

    printf("Number of ways = %d", maze( n, m));

    return 0;
}
