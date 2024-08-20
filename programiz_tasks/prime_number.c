#include <stdio.h>
#include <math.h>

int main(){
	
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	int sqrt_num = (int) sqrt(number);
	int i;
	int mod;
	
	if((number < 2) || ((number % 2 == 0) && (number != 2))){
		
		printf("It is not a prime number");
		
	} else {
		
		for(i = 3; i <= sqrt_num; i++){
			
			if(mod % i == 0){
				
				printf("It is not a prime number");
				
			} else {
				
				printf("It is a prime number");
				
			}
			
		}
		
	}
	
	return 0;
	
}
