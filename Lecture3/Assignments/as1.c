/*
    Lecture 3 Assignment #1
    Code simplification
    By: Christian Justin J. Salinas
*/

/* To get inputs and printing outputs properly. */
#include <stdio.h>

int main() {
    /* Variable Declaration */
    int age, teenager, true = 1, false = 0;

    /* Prompt for user's age and store it */
    printf("Enter your age: ");
    scanf("%d", &age);

    /* Simplified code */
    if (age >= 13 && age <= 19)
        teenager = true;
    else
        teenager = false;

    printf("%d", teenager);

    /* Indicate that the program ends here */
    return 0;
}
