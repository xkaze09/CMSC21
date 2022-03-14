/*
    Lecture 2 Assignment #1
    C Program that reverses a two-digit number
    By: Christian Justin J. Salinas
*/

#include <stdio.h> /* Include stdio.h for getting inputs
    and printing outputs properly. */

int main() // Execution of the program starts here
{
    /* Declare variables with integer type */
    int num, reversed;

    /* Prompt the user to enter a 2-digit number */
    printf("Please enter a 2-digit number: ");

    /* Read input and take two digits (truncation) from input */
    scanf("%2d", &num);

    /* Modulus division to get the first reversed digit and add it */
    reversed = reversed * 10 + num % 10;
    /* Remove current last digit from num */
    num = num / 10;

    /* Modulus division to get the second reversed digit and add it */
    reversed = reversed * 10 + num % 10;
    /* Remove last digit from num */
    num = num / 10;

    /* Display the output with the two-digits reversed */
    printf("Reverse: %2d", reversed);

    /* Indicate that the program ends here */
    return 0;
}
