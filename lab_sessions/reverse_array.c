#include <stdio.h>

int main(){
	
	int n;
	
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	
	int array[n];
	
	printf("Enter %d elements:\n", n);
	
	int i;
	
	for(i=0; i<n; i++){
		
		scanf("%d", &array[i]);
		
	}
	
	for(i=n-1; i>=0; i--){
		
		printf("%d ", array[i]);
		
	}
	
	return 0;
}
