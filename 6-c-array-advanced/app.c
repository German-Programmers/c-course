#include <stdio.h>

void main(){
    int arr[5] = {5, -2, 6, 8, 7};
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d\n", arr[i]);
    }
    // write code to print arr element reversly
    printf("//////////////////////\n");
    for (int i = 4; i >= 0; i--)
    {
        /* code */
        printf("%d\n", arr[i]);
    }
    printf("//////////////////////\n");
    int x = 1000;
    int d = x*10000000;
    printf("%d\n",d);
    printf("//////////////////////\n");
    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(*arr));
    printf("%d\n", sizeof(arr) / sizeof(*arr));
    printf("//////////////////////\n");
    int arr1[5] = {6, 9, 3, 7, 9};
    int arrLength = sizeof(arr1) / sizeof(*arr1);
    for (int i = 0; i < arrLength; i++)
    {
        /* code */
        printf("%d\n", arr1[i]);
    }
    printf("//////////////////////\n");
    // write a code to print only even numbers from arr1
    for (int i = 0; i < arrLength; i++)
    {
        /* code */
        if(arr1[i] % 2 != 0){
            printf("%d\n", arr1[i]);
        }
    }
    
}