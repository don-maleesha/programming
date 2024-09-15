#include <stdio.h>

int main(){
	
	char lowercase;
	
	printf("Enter a lowercase letter: ");
	scanf("%c", &lowercase);
	
	int ascii = (int) lowercase;
	int uppercase = ascii - 32;
	
	printf("Uppercase = %c", uppercase);
	
	return 0;
}
