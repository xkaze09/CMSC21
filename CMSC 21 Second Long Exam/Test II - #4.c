/*
    CMSC 21 Second Long Exam
    Part II. #4.
    By: Christian Justin J. Salinas
*/

#include <stdio.h>
#include <stdlib.h> 

// A: Constant SIZE is defined to 5.
#define SIZE 5

int main() {
    // A. 
    int numbers[SIZE] = {1, 2, 3, 4, 5};

    // B.
    int *ptr, i;

    // C.
    ptr = numbers;

    // D.
    printf("D. Print elements of array numbers using pointer / offset notation with the pointer 'ptr': \n");
    for (i = 0; i < SIZE; i++) {
        printf("a[%d] = %d\n", i, *(ptr + i));
    }

    printf("\n"); // Line break

    // E.
    printf("E. Print elements of array numbers using pointer / offset notation using the array name as the pointer: \n");
    for(i = 0; i < SIZE; i++) {
        printf("a[%d] = %d\n", i, *&numbers[i]);
    }

    printf("\n"); // Line break

    // F.
    printf("F. Element 2 of numbers using a pointer / offset notation using: \n");
    printf("F.1: Array index notation: %d\n", numbers[1]);
    printf("F.2: Array name as pointer: %d\n", *&numbers[1]);
    printf("F.3: Pointer index: %d\n", ptr[1]);
    printf("F.4: Pointer notation: %d\n", *(ptr + 1));

    return 0;
}