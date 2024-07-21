#include <stdio.h>

int main() {
	
	int age = 18;
	
	if(age == 18) {
		
		printf("You can vote\n"); // you can vote
		
	}
	
	age = 10;
	
	if(age == 18) {
		
		printf("You can vote\n"); // nothing will be printed
		
	}
	
}
