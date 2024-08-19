#include <stdio.h>

int main(){
	
	int number1, number2;
	
	printf("Enter your first number: ");
	scanf("%d", &number1);
	
	printf("Enter your second number: ");
	scanf("%d", &number2);
	
	int max = (number1 > number2)? number1: number2;
	
	printf("Largest number = %d", max);
	
	return 0;
}
