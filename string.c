#include <stdio.h>

int main(){
	
	int name[100];
	
	printf("enter a name: ");
	fgets(name, sizeof(name), stdin);
	
	puts(name);
	
	return 0;
	
}
