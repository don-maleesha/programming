#include <stdio.h>

int add(int a, int b);

int main(){
	
	int result = add(2, 5);
	printf("sum = %d", result);	
	return 0;
		
	}
	
int add(int a, int b){
		
	int sum = a + b;
		
	return sum;
	
	}

