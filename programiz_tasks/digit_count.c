#include <stdio.h>

int main(){
	
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	int count = 1;
	
	while(number != 0){
		
		number = number / 10;
		count++;
		
	}
	
	printf("Number of digits = %d", count);
	return 0;
	
}
