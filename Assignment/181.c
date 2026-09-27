// Write a Program that accesses and prints the third element from an array.



#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter 5 elements: ");
    
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Third element = %d", arr[2]);

    return 0;
}