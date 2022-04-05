/*
    Lecture 4 Assignment #4
    C program that computes for the power of two
    By: Christian Justin J. Salinas
*/

#include <stdio.h> // For getting inputs and outputs properly

int main() {
    /* Declare variables by int type */
    int n = 0, m = 1, user_input;

    /* Ask for user to input a power for 2 and store it */
    printf("Enter the power of 2: ");
    scanf("%d", &user_input);

    /* Evaluate power for user input */
    while(user_input != n){
        m *= 2;                 // Formula: Let m be "2 to the n"
        n++;                    // Increment by 1
    }

    /* Display output by input and output */
    printf("\n2 to the %d is %d\n", user_input, m);

    /* Indicate that the program ends here */
    return 0;
}
