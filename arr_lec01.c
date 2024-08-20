#include <stdio.h>

int main(){
	
	int age[3];
	
	printf("Enter: ");
	
	int i;
	
	for(i=0; i<3; i++){
		
		scanf("%d", &age[i]);
	}
	
	printf("Array: ");
	
	for(i=0; i<3; i++){
		
		printf("%d", age[i]);
	}
	
	return 0;
	
}
