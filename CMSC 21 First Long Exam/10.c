/*
    CMSC 21 First Long Exam
    Part IV. Coding Applications #10.
    By: Christian Justin J. Salinas
*/

#include <stdio.h>
#include <math.h>

int main() {
    /* Start of variable declaration and initialization */
    double x, y, y_new, tol, diff;
    tol = 0.00001;
    y = 1;
    diff = 1;
    /* End of variable declaration and initialization */

    /* Asks the user for input and store it into the
        program in order to calculate the square root of x */
    printf("Enter a number: ");
    scanf("%lf", &x);

    /* Loop to iterate until the absolute value of Yn +1 - Y is less than or equal to the
        tolerance, given by the variable tol = 0.00001 */
    while(fabs(diff) > tol){
        y_new = 0.5*(y+(x/y));
        diff = y - y_new;

        y = y_new;
    }

    /* After calculating the value, it displays the final approximation */
    printf(" The square root of %lf is %lf", x, y_new);

    return 0;
}
