#include <stdio.h>

int main(){
    int a[10][10];
    int i,j,r,c;
    printf("Enter matrix row and coloum size :\n");
    scanf("%d %d",&r,&c);
    printf("Enter matrix's elements : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The transpose matris is : \n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d  ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}