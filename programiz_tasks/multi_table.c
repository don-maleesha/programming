#include <stdio.h>

int main(){
	
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	int i;
	
	for(i = 1; i<=12; i++){
		
		printf("%d * %d = %d\n", number, i, number * i);
		
	}
	
	return 0;
}
