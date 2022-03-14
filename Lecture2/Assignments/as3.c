/*
    Lecture 2 Assignment #3
    C Program that povide the output of the following codes with given int i, j, k
    By: Christian Justin J. Salinas
*/

#include <stdio.h> /* Include stdio.h for getting inputs
    and printing outputs properly. */

int main() // Execution of the program starts here
{
    /* Declare variables with integer type */
    int i, j, k;

    // a
    i = 3; j = 4; k = 5;
    printf("%d", i < j || ++j < k);
    // b
    i = 7; j = 8; k = 9;
    printf("%d",i - 7 && j++ < k);
    // c
    i = 7; j = 8; k = 9;
    printf("%d", (i = j) || (j == k));
    printf("%d %d %d", i, j, k);
    // d
    i = j = k = 1;
    printf("%d", ++i || ++j && ++k);
    printf("%d %d %d", i, j, k);

    /* Indicate that the program ends here */
    return 0;
}
