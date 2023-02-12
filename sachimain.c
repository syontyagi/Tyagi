#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#include "gameover.h"



int main(int argc, char *argv[])
{
	int i, len, loc, turn, retval;
	int arr[9] = {2,2,2,2,2,2,2,2,2};
	len = 9;
	turn = 1;
	printf("matrix is: ");
	for(i=0;i<9;i++) {
		printf("%d ", arr[i]);
	}
	for(i=0;i<9;i++) {
		printf("\n");
		printf("input your move: ");
		scanf("%d", &loc);
		printf("you entered: %d\n",loc);
		retval = inputmove (arr, len, loc, turn);
		if (retval == -1) {
			i--;
		}
		else {
			if(gameover(arr, len) == 1) {
				return 1;
			}
			if(turn == 1) {
				turn = 2;
			}
			else {
				turn = 1;
			}
		}
	}
	return 0;
}
