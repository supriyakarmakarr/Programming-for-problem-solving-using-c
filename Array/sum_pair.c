#include <stdio.h>

int main(void){
    int n,i,j;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array element number : \n");
    for ( i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int pair = 0;
    int x;
    printf("Enter number which sum's pair you want to find : ");
    scanf("%d",&x);
    printf("The pair's are :\n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i] + a[j] == x){
            pair++;
            printf("(%d %d)\n",a[i],a[j]);
            }
        }
    }
    printf("Total pair = %d",pair);
    return 0;
}