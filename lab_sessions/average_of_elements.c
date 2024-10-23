#include <stdio.h>

int main(){
	
	int arr[] = {10, 20, 30,40, 50};
	
	int i;
	int n = sizeof(arr)/sizeof(int);
	int sum = 0;
	
	for(i=0; i<n; i++){
		
		sum = sum + arr[i];
		
	}
	
	float average = sum / 5;
	
	printf("%.2f", average);
	
	return 0;
}
