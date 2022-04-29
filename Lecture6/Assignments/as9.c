/*
    Lecture 6 Assignment
    Size of a number is determined
    By: Christian Justin J. Salinas
*/

#include <stdio.h>

int main(void) {
	int number[16];

	size_t n = sizeof(number)/sizeof(number[0]);
	printf("Total elements the array can hold is : %ld\n", n);

	return 0;
}