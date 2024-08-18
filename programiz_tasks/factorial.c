#include <stdio.h>

int main(){
	
	int number;
	
	printf("Enter a positive number: ");
	scanf("%d", &number);
	
	int factorial = 1;
	int i;
	
	if(number > 0){
		for(i = 1; i <= number; i++){
			factorial = factorial * i;
		}
		printf("Factorial = %d\n", factorial);
	} else {
		printf("Wrong input. Please enter a positive number.\n");
	}
	
	return 0;
}

