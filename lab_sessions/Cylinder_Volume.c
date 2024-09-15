#include <stdio.h>

#define PI 3.14

int main(){
	
	double volume, radius,height, surface_area;
	
	printf("Enter the radius of the cylinder: ");
	scanf("%lf", &radius);
	printf("Enter the height of the cylinder: ");
	scanf("%lf", &height);
	
	volume = PI * radius * radius * height;
	
	printf("The volume of the cylinder is %lf\n", volume);
	
	surface_area = (2 * PI * radius * height) + (2 * PI * radius * radius);
	
	printf("The area of the cylinder is %lf\n", surface_area);
	
	return 0;
}
