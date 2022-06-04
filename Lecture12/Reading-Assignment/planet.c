/* Checks planet names */

#include <stdio.h> /* scanf, printf */
#include <string.h> /* strcmp */

#define NUM_PLANETS 9

/* Handles a set of arguments and iterates 
    through whether input is in an array or not */
int main(int argc, char *argv[])
{
    /* Planets defined in order by 1 as the closest to sun */
    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};

    /* Declaration of looping variables */
    int i, j;

    /* Iterate through each input in command line,
        and compare to each string in the array until it matches or reaches the end of array */
    for (i = 1; i < argc; i++) {
        for (j = 0; j < NUM_PLANETS; j++) // Iterates through the array
            if (strcmp(argv[i], planets[j]) == 0) { // Checks if the input matches a string in the array
                /* Prompt the user of the similarity and location */
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        /* Prompt the user if no word matches in the array */
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    /* End of the program */
    return 0;
}