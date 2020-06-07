#include <stdio.h>

void main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        int num;
        printf("enter a number:\n");
        scanf("%d", &num);
        arr[i] = num;
    }
    //printf("you entered the following numbers:\n");
    int storage = 0;
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
        /* code */
        // printf("%d\n", arr[i]);
        storage += arr[i];

    }
    printf("The sum is:%d\n", storage);
    printf("The max is:%d\n", max);
    printf("The min is:%d\n", min);
    // write a code to sort the entered array numbers
      
    
    
}