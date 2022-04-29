/*
    Lecture 6 Assignment
    Reversing the order of the input
    By: Christian Justin J. Salinas
*/

#include <stdio.h>
#define N 10


int main(void){

	int a[N], i;

	printf("Enter %d numbers : \n", N);

	for (i=0; i < N; i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
		printf("In reverse order: ");

		for (i = N - 1; i >=0; i--){
			printf(" %d", a[i]);

		}
	printf("\n");

	return 0;
}

