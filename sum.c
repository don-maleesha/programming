#include <stdio.h>

int main(){
	
	int sum=0;
	int number = 1;
	
	while(number <= 10){
		
		sum = sum + number;
		number++;
		
	}
	
	printf("Sum = %d\n", sum);
	
	
	
	return 0;
	
}
