#include <stdio.h>

int main(){
    int a[10][10],b[10][10],x[10][10];
    int i,j,r,c;
    printf("Enter matrix row and coloum size :\n");
    scanf("%d %d",&r,&c);
    printf("Enter 1st matrix's elements : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 2nd matrix's elements : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
                x[i][j] = a[i][j] + b[i][j];
            }
    }
    printf("The resulttent matris is : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d  ",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}