#include <stdio.h>

int main(){
	
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	int i=1;
	int sum = 0;
	
	while(i<=number){
		 sum = sum + i;
		 i++;
	}
	
	printf("Sum = %d", sum);
	
	return 0;
	
}
