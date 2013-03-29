#include<stdio.h>

#define SARRAY 4

int recursive_calculate_sum(int input[4], int target, int remaining[4]) {
	int i, j, k;
	int sum;
	int tmp_array[SARRAY];
	int tmp_remaining[SARRAY];

	for(i=0; i < SARRAY; i++)  {
		tmp_remaining[i] = 0;
		tmp_array[i] = 0;
	}


	// do the sum
	sum = 0;
	for(i=0; i < SARRAY; i++) {
		sum += remaining[i];
	}

	// if sum meets crieteria the print values
	if (sum == target) {
		printf ("Hit Sum: %d - ", sum);
		for(i=0; i < SARRAY; i++)
			printf("%d ", remaining[i]);
		printf("\n");
	} 

	// sum is too great, break
	if (sum >= target) {
		return;
	}

	// build up array for recursive function - bug here with setting up array, initial array is all set to zero
	for (i=0; i < SARRAY ; i++) {
		for (j = i + 1; j < SARRAY; j++ ) {
			tmp_remaining[i] = input[j];
		}
		tmp_array[i] = input[i];
		recursive_calculate_sum(tmp_remaining, target, tmp_array);
	}

}


int calculate_sum(int input[SARRAY], int target) {
	int remaining[SARRAY], i;

	// make sure array is filled with zeros before starting
	for(i=0; i < SARRAY; i++) 
		remaining[i] = 0;

	recursive_calculate_sum(input, target, remaining);
}


int main(int argc, char *argv[]) {

	//int input[] = { argv[2], argv[3] , argv[4], argv[5] };
	int input[SARRAY];
	int target = 15;

	// pre-sorted list
	input[0] = 5;
	input[1] = 5;
	input[2] = 10;
	input[3] = 15;

	/*
	input[0] = 15;
	input[1] = 10;
	input[2] = 5;
	input[3] = 5;
	*/


	// print inputs
	printf ("Input: %d %d %d %d, Target: %d\n", input[0], input[1], input[2], input[3], target);

	calculate_sum(input, target);

	return 0;
}
