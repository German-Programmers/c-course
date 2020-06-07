#include <stdio.h>

void main(){
    // comment shortcut ctrl + k + c
    // uncomment shortcut ctrl + k + u
    // int i = 5;
    // i = 9;
    // printf("%d\n", i);
    int arr[4] = {-9, -5, -7, -9};
    // printf("%d\n", arr[5]);

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("//////////////\n");
    // write a code to show the sum of the array

    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += arr[i]; // sum = sum + arr[i];
    }

    printf("%d\n", sum);
    printf("//////////////\n");

    // write a code to print the max number in the array

    int max = arr[0];
    for (int i = 1; i < 4; i++)
    {
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    printf("%d\n", max);
    printf("//////////////\n");

// write a code to print the min number in the array
int min = arr[0];
    for (int i = 1; i < 4; i++)
    {
        if(min > arr[i]) {
            min = arr[i];
        }
    }

    printf("%d\n", min);


    



}