#include <stdio.h>

int main(){
	
	int n;
	
	printf("Size: ");
	scanf("%d", &n);
	
	int age[n];
	
	printf("enter ages: ");
	
	int i;
	
	for(i=0; i<n; i++){
		
		scanf("%d", &age[i]);
		
	}
	
	printf("array: ");
	
	for(i=0; i<n; i++){
		printf("%d\t", age[i]);
		
	}
	
	int sum = 0;
	
	for(i=0; i<n; i++){
		
		sum = sum + age[i];
		
	}
	
	printf("\nSum = %d", sum);
	
	float avg = (float) sum / n;
	
	printf("\nAvg = = %f", avg);
	
	
	return 0;
	
}
