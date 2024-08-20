#include <stdio.h>

int main(){
	
	int age[4];
	int i;
	
	printf("Enter:\n");
	for(i=0; i<4; i++){
		
		scanf("%d", &age[i]);
	}
	
	printf("Array: ");
	for( i = 0; i < 4; i++){
		
		printf("%d, ", age[i]);
		
	}
	
	return 0;
}
