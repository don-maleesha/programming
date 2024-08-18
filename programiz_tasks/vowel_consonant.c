#include <stdio.h>

int main(){
	
	char character;
	
	printf("Enter a character: ");
	scanf("%c", &character);
	
	if((character == 'a') || (character == 'e') || (character == 'i') || (character == 'o') || (character == 'a') || (character == 'A') || (character == 'E') || (character == 'I') || (character == 'O') || (character == 'U')){
		
		printf("It is a vowel.");
		
	}  else {
		
		printf("It is a consonant.");
		
	}
	
	return 0;
	
}
