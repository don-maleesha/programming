#include <stdio.h>

int sum(int a, int b);

int main(){
	
	int number1, number2;
	
	printf("Enter your first number: ");
	scanf("%d", &number1);
	
	printf("Enter your first number: ");
	scanf("%d", &number2);
	
	int result = sum(number1, number2);
	printf("Sum = %d", result);
	
	return 0;
	
}

int sum(int a, int b){
	
	int sum = a + b;
	
	return sum;
}
