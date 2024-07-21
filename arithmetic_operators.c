#include <stdio.h>

int main() {
	
	int a, b, add, sub, mul, div, mod;
	a = 4;
	b = 3;
	
	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	mod = a % b;
	
	printf("Addition is = %d\n", add);
	printf("Substraction is = %d\n", sub);
	printf("multiplication is = %d\n", mul);
	printf("Division is = %d\n", div);
	printf("Remainder is =  %d\n", mod);
	
	float c = 7.89;

	float newMod = c / 2; //3.945000
	printf("Remainder is =  %f\n", newMod);
	
	/*float newMod = c % 2;             // This will give error because % operator is not defined for float data type.
	printf("Remainder is =  %f\n", newMod);*/
	
	return 0;
	
}
