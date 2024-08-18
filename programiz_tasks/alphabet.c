#include <stdio.h>

int main(){
	
	char character;
	
	printf("Enter a character: ");
	scanf("%c", &character);
	
	if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')){
		
		printf("%c is an alphabet", character);
		
	} else {
		
		printf("%c is not an alphabet", character);
		
	}
	
	return 0;
	
}
