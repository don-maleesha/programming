//Write a C program that prompts the user to enter two numbers and create a simple calculator to perform the basic arithmetic operations.
//(Hint: Addition, subtraction, multiplication, division)

#include <stdio.h>

int main(){
	
	float num1, num2;
	
	printf("Enter the number1: ");
	scanf("%f", &num1);

	printf("Enter the number2: ");
	scanf("%f", &num2);
	
	float addition = num1 + num2;
	float subtraction = num1 - num2;
	float multiplication = num1 * num2;
	float division = num1 / num2;
	
	printf("Addition = %f\n", addition);
	printf("Subtraction = %f\n", subtraction);
	printf("Multiplication = %f\n", multiplication);
	printf("Division = %f\n", division);
	
	return 0;
}
