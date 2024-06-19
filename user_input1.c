#include <stdio.h>

int main() {
	
	float x, y, sum;
	
	printf("Enter a float number: ");
	scanf("%f", &x);
	
	printf("Enter another float number: ");
	scanf("%f", &y);
	
	sum = x + y;
	
	printf("Sum = %.2f", sum);
	
	return 0;
}
