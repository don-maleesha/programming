//Write a C program to calculate the area of a rectangle.

#include <stdio.h>

int main(){
	
	float area, base, height;
	
	printf("Enter the base value: ");
	scanf("%f", &base);
	
	printf("Enter the height value: ");
	scanf("%f", &height);
	
	area = (base * height) / 2;
	
	printf("Area = %f", area);
	
	return 0;
}
