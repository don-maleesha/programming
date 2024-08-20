#include <stdio.h>

int armstrong(int n);

int main(){
	
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	armstrong(number);
	
	
	return 0;
	
	
}

int armstrong(int n){
	
	int original = n;
	int temp;
	int result;
	
	while(n != 0){
		
		temp = n % 10;
		result = result + temp * temp * temp;
		n = n / 10;
		
	}
	
	if(original == result){
		
	printf("Yes");
		
	} else {
		
	printf("no");
			
	}
	
	
}
