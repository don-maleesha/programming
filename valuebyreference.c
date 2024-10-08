#include <stdio.h>

void cubeByReference(int *ptr);

void main(){
	
	int number = 5;
	
	printf("original value: %d", number);
	
	cubeByReference(&number);
	
	printf("The new value of number: %d\n", number);
}

void cubeByReference(int *ptr){
	
	*ptr = *ptr * *ptr * *ptr;
}
