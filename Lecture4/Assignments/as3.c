/*
    Lecture 4 Assignment #3
    Conversion of item 1 into equivalent statements
    By: Christian Justin J. Salinas
*/

#include <stdio.h> // For getting inputs and outputs properly

int main() {
    int i = 1;

    /* While Loop */
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }

    /* For Loop */
    for (;i <= 128; i *= 2) {
        printf("%d ", i);
    }

    /* Do-While Loop */
    do {
        printf("%d ", i);
        i *= 2;
    } while (i <= 128);

    return 0;
}
