/*
    Lecture 6 Assignment
    Values like index b[0] and b[1] 
    	in which the value is not indicated is zero
    By: Christian Justin J. Salinas
*/


#include <stdio.h>

int main(void){
	int i;
	int b[15] = { [2] = 29, [9] = 7, [4] = 48};

	for (i = 0; i < 15; i++){
		printf("b[%d] = %d \n", i,b[i]);

	}
	return 0;
}