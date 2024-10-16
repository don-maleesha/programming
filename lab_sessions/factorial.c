#include <stdio.h>

int main(){
	
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int no1 = 0;
	int no2 = 1;
	
	if(n==1){
		
		printf("%d ", no1);
		
	} else {
		
		printf("%d ", no1);
		printf("%d ", no2);
		
	} 
	
	int i, no3;
	
	for(i=2; i<n; i++){
		
		no3 = no1 + no2;
		no1 = no2;
		no2 = no3;
		
		printf("%d ", no3);
		
	}
	
	return 0;
}
