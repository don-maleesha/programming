#include <stdio.h>

int main(){
	
	char arr[20] = "Hello";
	
	int i;
	
	for(i=0; arr[i] != '\0'; ++i);
	
	printf("%d", i);
	
	return 0;
	
}
