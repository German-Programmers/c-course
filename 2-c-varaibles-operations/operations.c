#include <stdio.h>
#include <stdbool.h>

void main(){
    int i = 5;
    int x = 0;
    // int z = x * i;
    // + - * / %
     double z = (float)i / (float)x;
     //double z = i / x;
     printf("%.4f\n", z); 

    // bool check = false; // true
    bool check = i == x;

    if (check) {
        printf("it is true");
    } else {
        printf("it is false");
    }

}