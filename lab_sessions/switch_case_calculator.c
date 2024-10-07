#include <stdio.h>

int main(){
	
	int number1, number2;
	char operators;
	
	printf("Enter number1: ");
	scanf("%d", &number1);
	printf("Enter number2: ");
	scanf("%d", &number2);
	
	printf("Enter the operator [+, -, *, /]: ");
	scanf(" %c", &operators);
	
	int sum = number1 + number2;
	int sub = number1 - number2;
	int mul = number1 * number2;
	int div = number1 / number2;
	
	switch(operators){
		case '+' :
			printf("Sum = %d", sum);
			break;
		case '-' :
			printf("Sub = %d", sub);
			break;
		case '*' :
			printf("Mul = %d", mul);
			break;
		case '/' :
			printf("Div = %d", div);
			break;
		default:
			printf("There is an error!");
			break;
	}
	
	return 0;
}
