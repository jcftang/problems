#include<stdio.h>

#define SARRAY 4

int main(int argc, char *argv[]) {

	int i, j, k, l;

	//int input[] = { argv[2], argv[3] , argv[4], argv[5] };
	// pre-sorted list
	//int input[] = { 5, 5, 0, 0 };
	int input[] = { 5, 5, 10, 15 };
	//int input[] = { 15, 10, 5, 5 };
	int target = 10;
	int sum;

	// print inputs
	printf ("Input: ");
	for(i=0; i<SARRAY; i++)
		printf("%d ", input[i]);
	printf (", Target: %d\n", target);
	
	for (i = 0; i < SARRAY; i++)
		for (j = i + 1; j < SARRAY; j++) {
			sum = input[i] + input[j];
			printf ("%d + %d = %d\n", input [i], input [j], sum);
		}

	return 0;
}
