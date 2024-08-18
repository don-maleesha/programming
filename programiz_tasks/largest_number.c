#include <stdio.h>

int main(){
	
	float number1, number2, number3;
	
	printf("Enter your first number: ");
	scanf("%f", &number1);
	
	printf("Enter your second number: ");
	scanf("%f", &number2);
	
	printf("Enter your third number: ");
	scanf("%f", &number3);
	
	if((number1 > number2) && (number1 > number3)){
		
		printf("first number is the largest.");
		
	} else if (((number2 > number1) && (number2 > number3))){
		
		printf("second number is the largest.");
		
	} else {
		
		printf("third number is the largest.");
		
	}
	
	return 0;
	
}
