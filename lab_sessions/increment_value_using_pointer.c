#include <stdio.h>

int main(){
	
	int number;
	int *ptr = &number;
	
	printf("Enter an integer: ");
	scanf("%d", ptr);
	
	printf("Original value: %d\n", *ptr);
	
	printf("Value after incrementing: %d", ++*ptr);
	
	return 0;
	
}
