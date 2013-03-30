#include<stdio.h>
#include<stdlib.h>

#define SARRAY 4

int recursive_calculate_sum(int input[SARRAY], int target, int remaining[SARRAY]) {
	int i, j;
	int sum;
	int tmp_array[SARRAY];
	int tmp_remaining[SARRAY];
	int tmp;

	for(i=0; i < SARRAY; i++)  {
		tmp_remaining[i] = 0;
		tmp_array[i] = 0;
	}

	sum = sum_array(remaining);

	// if sum meets crieteria the print values
	if (sum == target) {
		printf ("Hit Sum: %d - ", sum);
		for(i=0; i < SARRAY; i++) {
			printf("%d ", remaining[i]);
		}
		printf("\n");
		return;
	} 

	// sum is too great, break
	if (sum > target) {
		return;
	}

	// build up array for recursive function - bug here with setting
	// up array, initial array is all set to zero
	for (i=0; i < SARRAY ; i++) {
		tmp = input[i];
		for (j = i + 1; j < SARRAY; j++ ) {
			tmp_remaining[j - 1] = input[j];
		}
		tmp_array[i] = tmp;
		recursive_calculate_sum(tmp_remaining, target, tmp_array);
	} 
}


int sum_array(int input[SARRAY]) {
	int i;
	int sum = 0;

	for(i=0; i < SARRAY; i++) {
		sum += input[i];
	}

	return sum;
}


int calculate_sum(int input[SARRAY], int target) {
	int remaining[SARRAY], i;

	// make sure array is filled with zeros before starting
	for(i=0; i < SARRAY; i++) 
		remaining[i] = 0;

	recursive_calculate_sum(input, target, remaining);
}


int main(int argc, char *argv[]) {

	int i;

	//int input[] = { argv[2], argv[3] , argv[4], argv[5] };
	int input[SARRAY];

	// pre-sorted list
	input[0] = 5;
	input[1] = 5;
	input[2] = 10;
	input[3] = 15;

	//int input[] = { 5, 5, 10, 15 };
	//int input[] = { 15, 10, 5, 5 };
	int target = 15;

	// print inputs
	printf ("Input: ");
	for(i=0; i<SARRAY; i++)
		printf("%d ", input[i]);
	printf (", Target: %d\n", target);
	
	calculate_sum(input, target);

	return 0;
}
