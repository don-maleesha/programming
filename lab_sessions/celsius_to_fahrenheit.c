//Write a C program to get celsius temperature from the user and convert it to fahrenheit.
//(Hint : fahrenheit = (Celsius × 9/5) + 32 )

#include <stdio.h>

int main(){
	
	float celsius, fahrenheit;
	
	printf("Enter the celsius value: ");
	scanf("%f", &celsius);
	
	fahrenheit = (celsius * 9/5) + 32 ;
	
	printf("Fahrenheit value = %f", fahrenheit);
	
	return 0;
}
