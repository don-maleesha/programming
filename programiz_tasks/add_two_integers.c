#include <stdio.h>

int main() {
	
	//Program to Add Two Integers

	int number1, number2, sum;
	
	printf("Enter a number: ");
	scanf("%d", &number1);
	
	printf("Enter another number: ");
	scanf("%d", &number2);
	
	sum = number1 + number2;
	
	printf("Sum = %d", sum);
	
	return 0;
}
