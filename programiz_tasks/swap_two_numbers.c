#include <stdio.h>

int main(){
	
	int number1, number2;
	
	printf("Enter your number1: ");
	scanf("%d", &number1);
	
	printf("Enter your number1: ");
	scanf("%d", &number2);
	
	int temp = number1;
	number1 = number2;
	number2 = temp;
	
	printf("number1 = %d\n", number1);
	printf("number2 = %d\n", number2);
	
	return 0;
	
}
