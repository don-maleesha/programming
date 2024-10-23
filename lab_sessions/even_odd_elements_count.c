#include <stdio.h>

int main(){
	
	int array[5];
	
	printf("Enter 5 elements:\n");
	
	int i;
	for(i=0; i<5; i++){
		
		scanf("%d", &array[i]);
		
	}
	
	int even_count = 0;
	int odd_count = 0;
	
	for(i=0; i<5; i++){
		
		if(array[i] % 2 == 0){
			
			even_count++;
			
		}
		
	}
	
	printf("Number of even elements: %d\n", even_count);
	
	for(i=0; i<5; i++){
		
		if(array[i] % 2 != 0){
			
			odd_count++;
			
		}
		
	}
	
	printf("Number of odd elements: %d\n", odd_count);
	
	return 0;
}
