#include <stdio.h>

int main(){
	
	int length;
	
	printf("Enter the length of the line: ");
	scanf("%d", &length);
	
	int i;
	
	for(i=0; i<length; i++){
		printf("*");
	}
	
	return 0;
}
