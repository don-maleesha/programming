#include <stdio.h>

int main(){
	
	int number;
	
	printf("enter a number: ");
	scanf("%d", &number);
	
	int first_number = 0;
	int second_number = 1;
	
	printf("%d, %d", first_number, second_number);
	int i;
	
	for(i = 2; i<number; i++){
		
		int third_number = first_number + second_number;
		printf(", %d", third_number);
		
		first_number = second_number;
		second_number = third_number;
		
		
	}
	
	return 0;
	
}
