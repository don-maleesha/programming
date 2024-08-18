#include <stdio.h>

int main(){
	
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	int sum = 0;
	int i;
	
	for(i = 1; i <= number; i++){
		
		sum = sum + i;
		
	}
	
	printf("Sum = %d", sum);
	
	return 0;
	
}
