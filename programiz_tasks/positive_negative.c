#include <stdio.h>

int main(){
	
	float number;
	
	printf("Enter a number: ");
	scanf("%f", &number);
	
	if(number > 0){
		
		printf("positive");
		
	} else if(number < 0) {
		
		printf("negative");
		
	} else {
		
		printf("number is equal to zero.");
		
	}
	
	return 0;
	
}
