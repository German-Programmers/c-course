#include <stdio.h>

void main () {
    // i++ like i = i + 1
    // for (int i = 1; i <= 10; i++){
    //     printf("%d\n", i);
    // }


    // int x = 1+2+3+4+5+6+7+8+9+10;

int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum = sum + i;
    }
    
    printf("sum = %d\n", sum);


int factor = 1;
for (int x = 2; x <= 5; x++){
    factor = factor * x;
}
printf("factor = %d\n", factor);
    

}