//Write a C program to calculate the circumference of a circle for a given radius
//(Hint : circumference of a circle = 2 * 3.14 * r )


#include <stdio.h>

int main(){
	
	float circumference, radius;
	
	printf("Enter the radius value: ");
	scanf("%d", &radius);
	
	circumference = 2 * 3.14 * radius;
	
	printf("Circumference = %f", circumference);
	
	return 0;
}
