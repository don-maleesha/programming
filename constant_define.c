#include <stdio.h>

#define PI 3.14

int main() {
	
	//using the #define pre-processor
	float radius;
	
	printf("Enter the radius value: ");
	scanf("%f", &radius);
	
	float area = PI * radius * radius;
	
	printf("Area = %f", area);
	
	return 0;
	
}
