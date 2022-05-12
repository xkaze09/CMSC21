/*
    Lectures 6-7 Assignment #1 1a. and 1b.
    By: Christian Justin J. Salinas
*/

#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int)(sizeof(pathway) / sizeof(pathway[0])))

int main() {

    /*

    A boolean array that contains true/false values referring to
    whether a certain pathway is open/close for transportation.

    Only pathways 0 and 3 are open for transportation. The rest are close.

    */
    // bool pathway[8] = {[0] = true, [2] = true};  // For Assignment 1a.
    bool pathway[8] = {1, 0, 1, 0, 0, 0, 0, 0};     // For Assignment 1b.

    for (int i = 0; i < NUM_PATHWAYS; i++)
    {

        /*

        Display the status of each pathway.

        Remember that pathway s type bool so its elements are either true/false - 1/0.

        */

        if (pathway[i])
        {
            printf("pathway[%d] is open \n", i);
        }
        else
        {
            printf("pathway[%d] is close \n", i);
        }
    }

    return 0;
}
