#include <stdio.h>

int main(){
	
	char str[20];
	
	printf("Enter: ");
	scanf("%s", str);
	
	printf("You entered: %s", strupr(str));
	
	
	return 0;
}
