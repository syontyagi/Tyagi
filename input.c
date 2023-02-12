#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"

int inputmove(int arr[], int len, int loc, int turn)
{
	int i;
	
	//error checks
	if(loc < 0 || loc > 9) {
		printf("Sorry bud, can't play there!");
		return -1;
	}
	if(arr[loc-1] != 2) {
		printf("Ya snooze, ya lose! This spot is already taken.");
		return -1;
	}

	//update matrix with turn
	if(turn == 1) {
		arr[loc-1] = 1;
	}
	if(turn == 2) {
		arr[loc-1] = 0;
	}

	//print updated matrix
	printf("matrix is: ");
	for(i=0;i<len;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
