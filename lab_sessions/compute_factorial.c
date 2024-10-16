#include <stdio.h>

int main(){
	
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int i, factorial = 1;
	
	for(i=1; i<=n; i++){
		
		factorial = factorial * i;
		
	}
	
	printf("Factorial = %d", factorial);
	
	return 0;
	
}
