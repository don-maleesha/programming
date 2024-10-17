#include <stdio.h>

int main(){
	
	int n;
	
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	
	int array[n];
	
	printf("Enter %d elements:\n", n);
	
	int sum = 0;
	
	int i;
	
	for(i=0; i<n; i++){
		
		scanf("%d", &array[i]);
		
	}
	
	for(i=0; i<n; i++){
		
		sum = sum + array[i];
		
	}
	
	printf("The sum of all elements is: %d", sum);
	
	return 0;
}
