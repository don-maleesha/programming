#include <stdio.h>

int main(){
	
	float number;
	
	printf("Enter a number: ");
	scanf("%f", &number);
	
	if(number > 0){
		
		printf("The number is positive.");
		
	} else if(number < 0){
		
		printf("The number is negative");
		
	} else {
		
		printf("The number is zero");
	}
	
	return 0;
}
