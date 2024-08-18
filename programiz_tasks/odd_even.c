#include <stdio.h>

int main(){
	
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	if(number % 2 == 0){
		
		printf("This is even");
		
	} else {
		
		printf("This is odd");
		
	}
	
	return 0;
	
}
