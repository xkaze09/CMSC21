/*
    CMSC 21 First Long Exam
    Part IV. Coding Applications #8b Letter C.
    By: Christian Justin J. Salinas
    The code below outputs:
    *****
    <<<<<
*/

#include <stdio.h>

int main() {
    /* Start of variable declaration */
    int a = 2;
    int b = 3;
    /* End of variable declaration */

    /* Start of code snippet */
    if (a == 2 && b == 3)
        printf("*****\n");
      else {
        printf("-----\n");
        printf(">>>>>\n");
    }
    /* Print statement below is placed outside of the if-else statement */
    printf("<<<<<\n");

    /* End of code snippet */

    return 0;
}
