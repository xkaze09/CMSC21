/*
    Lecture 4 Assignment #2
    Checking equivalence of given while, for, and do-while loops
    By: Christian Justin J. Salinas
*/

#include <stdio.h> // For getting inputs and outputs properly

int main() {
    int i = 11; // As an example

    /* While Loop */
    while (i < 10){
        printf("%d ", i);
        i++;
    }

    /* For Loop */
    for (;i < 10; i++){
        printf("%d ", i);
    }

    /* Do-While Loop */
    do{
        printf("%d ", i);
        i++;
    }while(i < 10);

    return 0;
}
