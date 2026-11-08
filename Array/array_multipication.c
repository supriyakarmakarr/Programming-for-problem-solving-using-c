#include <stdio.h>

int main(){
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,r1,c1,r2,c2;
    printf("Enter number of first matrix's row and colum : \n");
    scanf("%d %d",&r1,&c1);
    printf("Enter number of 2nd matrix's row and colum : \n");
    scanf("%d %d",&r2,&c2);
    if(c1 != r2){
        printf("Multipication is not possible.\n");
        return 0;
    }
    printf("Enter 1st matrix's elements : \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 2nd matrix's elements : \n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            c[i][j]=0;
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("The resulttent matris is : \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}