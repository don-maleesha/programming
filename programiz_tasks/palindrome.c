#include <stdio.h>

int main(){
	
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	int original = number;
	int temp;
	int new_num;
	
	
	while (number != 0){
		
		temp = number % 10;
		new_num = new_num * 10 + temp;
		number = number / 10;
		
	}
	
	if(original == new_num){
		
		printf("Palindrome");
		
	} else {
		
		printf("Not Palindrome");
		
	}
	
	return 0;
	
}
