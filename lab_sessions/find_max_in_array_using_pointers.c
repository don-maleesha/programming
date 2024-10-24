#include <stdio.h>

int main(){
	
	int number;
	
	printf("Enter the number of elements: ");
	scanf("%d", &number);
	
	int array[number];
	int *ptr = array;
	
	int i;
	
	printf("Enter the elements: ");
	for(i=0; i<number; i++){
		
		scanf("%d", (ptr+i));
		
	}
	
	printf("\n");
	
	int max = *ptr;
	for(i=0; i<number; i++){
		
		if(max < *(ptr+i)){
			
			max = *(ptr+i);
			
		}
		
	}
	
	printf("The maximum value is: %d", max);
	
	return 0;
	
}
