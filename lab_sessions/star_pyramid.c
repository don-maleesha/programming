#include <stdio.h>

int main(){
	
	int height;
	
	printf("Enter the height of the pyramid: ");
	scanf("%d", &height);
	
	int i, j;
	
	for(i=0; i<height; i++){
		for(j=i; j<height; j++){
			printf("*");
		}
		printf("\n");
	}
}
