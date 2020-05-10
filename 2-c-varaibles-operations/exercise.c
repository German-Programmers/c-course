#include <stdio.h>

void main(){
    int firstNumber, secondNumber;
    printf("enter first number ");
    scanf("%d", &firstNumber);
    printf("enter second number ");
    scanf("%d", &secondNumber);

    if(secondNumber == 0){
        printf("you can not divide on 0\n");
    } else {
        printf("%.3f",(float)firstNumber / (float)secondNumber );
    }
}

//grade > 100 or grade < 0 print error
// grade >= 90 print excellent
// grade >= 80 print very good
// grade >= 70 print good
// grade >= 60 print middle
// grade >= 50 print weak
// grade < 50 print fail
