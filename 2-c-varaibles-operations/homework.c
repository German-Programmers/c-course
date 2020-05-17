//grade > 100 or grade < 0 print error
// grade >= 90 print excellent
// grade >= 80 print very good
// grade >= 70 print good
// grade >= 60 print middle
// grade >= 50 print weak
// grade < 50 print fail

#include <stdio.h>
void main(){
    int grade;
    printf("Enter the grade\n");
    scanf("%d", &grade);
    if (grade > 100 || grade < 0){
        printf("grade is out of range\n");
    } else {
        if (grade >= 90) {
            printf("excellent\n");
        } else {
            if (grade >= 80) {
                printf("very good\n");
            } else{
                if (grade >= 70) {
                    printf("good\n");
                } else {
                    if (grade >= 60) {
                        printf("middle\n");
                    } else {
                         if (grade >= 50) {
                             printf("Weak\n");
                         } else {
                             printf("fail\n");
                         }
                    }
                    
                }
            }
        }
    }
    return 0;
}