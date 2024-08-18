#include <stdio.h>

int main(){
	
	int number1, number2;
	
	printf("Enter your numbers: ");
	scanf("%d %d", &number1, &number2);
	
	int multi = number1 * number2;
	int lcm;
	
	if(number1 > number2){
		
		if(number2 == 0){
			
			printf("GCD = %d\n", number1);
			
		} else {
			
			while(number2 != 0){
				
				int remainder = number1 % number2;
				number1 = number2;
				number2 = remainder;
				
			}
			
			printf("GCD = %d\n", number1);
			
		}
		
	 	lcm = multi / number1;
		printf("LCM = %d\n", lcm);
		
	} else {
		
		if(number1 == 0){
			
			printf("GCD = %d\n", number2);
			
		} else {
			
			while(number1 != 0){
				
				int remainder = number2 % number1;
				number2 = number1;
				number1 = remainder;
				
			}
			
			printf("GCD = %d\n", number2);
			
		}
		
		int lcm = multi / number2;
		printf("LCM = %d\n", lcm);
		
	}
	
	
	
	return 0;
}
