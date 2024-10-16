#include <stdio.h>

int main(){
	
	float n;
	int i;
	float sum = 0;
	
	for(i=1; i<=5; i++){
		
		printf("Enter number%d: ", i);
		scanf("%f", &n);
		
		if(n>0){
			
			sum = sum + n;
		}
		
	}
	
	printf("Sum = %.2f", sum);
	
	return 0;
}
