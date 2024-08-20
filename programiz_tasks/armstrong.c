#include <stdio.h>

int main(){
	
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	int original = number;
	
	int temp;
	int new_num;
	int result;
	
	while (number != 0){
		
		temp = number % 10;
		result = result + temp * temp * temp;
		number = number / 10;
		
	}
	
	if(original == result){
		
		printf("Armstrong.");
		
	} else {
		
		printf("Not armstrong.");
		
	}
	return 0;
}
