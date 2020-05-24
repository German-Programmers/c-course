#include <stdio.h>

void main() {
// homework:
// write code to print the following pattern
// 

// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
// *********
// **********

for (int i = 0; i < 10; i++)
{
    for (int x = 0; x <= i; x++)
    {
        printf("*");
    }
    printf("\n");
    
}
printf("==========================\n");

// **********
// *********
// ********
// *******
// ******
// *****
// ****
// ***
// **
// *
for (int i = 9; i >= 0; i--)
{
    for (int x = 0; x <= i; x++)
    {
        printf("*");
    }
    printf("\n");
    
}

printf("==========================\n");

//         *
//        **
//       ***
//      ****
//     *****
//    ******
//   *******
//  ********
// *********
//**********

for (int i = 0; i < 10; i++)
{
    for (int x = 0; x < 10; x++)
    {
        if(x < 9 - i ){
            printf(" ");
        } else
        {
            printf("*");
        }
        
        
    }
    printf("\n"); 
}


}