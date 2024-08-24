#include <stdio.h>

int main(){
	
	int arr[1000];
	
	fgets(arr, sizeof(arr), stdin);
	
	int i;
	
	for(i=0; i<strlen(arr)-1; i++){
		
		printf("%s\n", arr[i]);
		
	}
	
	return 0;
}
