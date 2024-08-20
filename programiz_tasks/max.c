#include <stdio.h>

int main(){
	
	int n;
	
	printf("Size: ");
	scanf("%d", &n);
	
	int age[n];
	
	int i;
	
	printf("Enter elements: ");
	for(i=0; i<n; i++){
		
		scanf("%d", &age[i]);
		
	}
	
	printf("Array: ");
	for(i=0; i<n; i++){
		
		printf("%d", age[i]);
		
	}
	
	int max = age[0];
	int min = age[0];
	
	for(i=0; i<n; i++){
		
		if(max<age[i]){
			
			max = age[i];
			
		}
		
	}
	
	printf("\nMax = %d", max);
	
	for(i=0; i<n; i++){
		
		if(min>age[i]){
			
			min = age[i];
			
		}
		
	}
	
	printf("\nMin = %d", min);
	
	
	return 0;
}
