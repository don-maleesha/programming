#include <stdio.h>

int main(){
	
	int number;
	
	printf("Ener a number: ");
	scanf("%d", &number);
	
	int new_num;
	int temp;
	
	while(number != 0){
		
		temp = number % 10;
		new_num = new_num * 10 + temp;
		number = number / 10;
		
	}
	
	printf("%d", new_num);
	
	return 0;
}
