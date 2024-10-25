#include <stdio.h>

int main(){
	
	int n;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	int array[n];
	int *ptr = array;
	
	int i;
	
	printf("Enter the elements: ");
	
	for(i=0; i<n; i++){
		
		scanf("%d", (ptr+i));
		
	}
	
	printf("\n");
	printf("Original Array: ");
	
	for(i=0; i<n; i++){
		
		printf("%d ", *(ptr+i));
		
	}
	
	printf("\n");
	printf("Reversed Array: ");
	
	for(i=n-1; i>=0; i--){
		
		printf("%d ", *(ptr+i));
		
	}
	
	return 0;
}
