#include <stdio.h>

int main(){
	
	int array[4][4];
	int i, j;
	
	// Initializing the array with values
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			scanf("%d", &array[i][j]); // Example: storing product of (i+1) and (j+1)
		}
	}
	
	// Printing the array
	printf("The 2D array is:\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

