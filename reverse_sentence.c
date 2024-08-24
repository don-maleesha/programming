#include <stdio.h>

int main(){
	
	char sentence[1000];
	
	printf("Enter a sentence: ");
	fgets(sentence, sizeof(sentence), stdin);
	
	printf("You entered: ");
	puts(sentence);
	
	int length = strlen(sentence);
	printf("length of the string: %lu\n", length);
	
	int i;
	
	
	for(i=length-1; i>=0; i--){
		
		printf("%c", sentence[i]);
	}
	return 0;
}
