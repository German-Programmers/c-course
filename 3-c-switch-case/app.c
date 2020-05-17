#include <stdio.h>

void main(){
    printf("Enter the Grade\n");
    int grade;
    scanf("%d", &grade);

    switch (grade)
    {
    case 1:
        printf("A\n");
        break;
    case 2:
        printf("B\n");
        break;
    case 3:
        printf("c\n");
        break;
    case 4:
        printf("D\n");
        break;
    case 5:
        printf("E\n");
        break;
    case 6:
        printf("F\n");
        break;
    default:
        printf("Error\n");
        break;
    }


}