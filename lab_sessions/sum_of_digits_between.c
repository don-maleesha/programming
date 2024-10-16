#include <stdio.h>

int main(){
	
	int number1, number2;
	
	printf("Enter the lower and upper bounds: ");
	scanf("%d %d", &number1, &number2);
	
	printf("Sum of digits of numbers between %d and %d:\n", number1, number2);
	
	int i;
	int digit1, digit2, sum;
	
	for(i=number1; i<=number2; i++){
		
		digit1 = i / 10;
		digit2 = i % 10;
		
		sum = digit1 + digit2;
		
		printf("sum of digits of %d is %d\n", i, sum);
		
	}
	
	return 0;
}
