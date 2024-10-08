#include <stdio.h>

void main(){
	
	char *studentName[10];
	int i;
	
	for(i=0; i<5; i++){
		
		printf("\nEnter name: ");
		scanf("%s", studentName+i);
		printf("You entered: %s", studentName+i);
	}
	
	printf("\nyou entered: ");
	for(i=0; i<5; i++){
		
		printf("You entered: %s\n", studentName+i);
	}
}
