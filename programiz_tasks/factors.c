#include <stdio.h>

int main(){
	
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	printf("Factors are: ");
	
	int i;
	
	for(i = 1; i <=number; i++){
		
		if(number % i == 0){
			
			printf("%d ", i);
			
		}
		
	}
	
	printf("\n");
	
	return 0;
	
}
