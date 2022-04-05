/*
    Lecture 4 Assignment #1
    Checking the output of the following program
    By: Christian Justin J. Salinas
*/

#include <stdio.h> // For getting inputs and outputs properly

int main() {
    int i;

    i = 1;
    while (i <= 128){
        printf("%d ", i);
        i *= 2;
    }

    return 0;
}
