#include <stdio.h>

int main(){
	
	int i;
	int length;
	
	printf("Enter the length line: ");
	scanf("%d", &length);
	
	for(i=0; i<length; i++){
		printf("*");
	}
	
	return 0;
}
