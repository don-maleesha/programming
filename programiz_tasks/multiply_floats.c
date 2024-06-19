#include <stdio.h>

int main(){
	
	//Program to Multiply Two Numbers

	float number1, number2, multiplication;
	
	printf("Enter a float number: ");
	scanf("%f", &number1);
	
	printf("Enter another float number: ");
	scanf("%f", &number2);
	
	multiplication = number1 * number2;
	
	printf("The multiplication = %.3f", multiplication);
	
	return 0;
	
}
