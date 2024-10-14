#include <stdio.h>

int main(){
	
	int size;
	
	printf("Enter the size of the square: ");
	scanf("%d", &size);
	
	int i, j;
	
	for(i=0; i<size; i++){
		
		for(j=0; j<size; j++){
			
			printf("*");
			
		}
		printf("\n");
		
	}
	
}
