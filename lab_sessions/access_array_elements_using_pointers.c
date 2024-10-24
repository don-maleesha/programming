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
	
	printf("Array elements are: ");
	
	for(i=0; i<number; i++){
		
		printf("%d ", *(ptr+i));
		
	}
	
	return 0;
	
}
