#include <stdio.h>

int main() {
	
	int age = 20;
	
	if(age >= 20) {
		
		printf("you can vote\n"); // you can vote
		
	}
	
	age = 10;
	
	if(age >= 18) {
		
		printf("You can vote\n"); // nothing will be printed
		
		/*When the code reaches this if statement after setting age to 10 (age = 10;), the condition age >= 18 evaluates to false because 10 is not greater than or equal to 18. 
		Therefore, the code block inside the if statement will not be executed, and the printf statement will not be executed as well. As a result, nothing will be printed to the console in this case.*/
	}
	
	age = 18;
	
	if(age >= 18) {
		
		printf("You can vote\n"); // You can vote
		
	}
}
