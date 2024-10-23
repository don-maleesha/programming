#include <stdio.h>

int main(){
	
	int array[5];
	
	printf("Enter 5 elements of the array:\n");
	
	int i;
	
	for(i=0; i<5; i++){
		
		scanf("%d", &array[i]);
		
	}
	
	int max = array[0];
	int min = array[0];
	
	for(i=0; i<5; i++){
		
		if(max > array[i]){
			
			min = array[i];
			
		}	
		
	}
	
	printf("The smallest element is: %d\n", min);
	
	for(i=0; i<5; i++){
		
		if(max < array[i]){
			
			max = array[i];
			
		}
		
	}
	
	printf("The largest element is: %d\n", max);
	
	return 0;
}
