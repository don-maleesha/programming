#include <stdio.h>

int main(){
	
	char str[100];
	
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	
	printf("You entered: ");
	
	puts(str);
	
	int count = 0;
	
	char character;
	
	printf("Enter a character to count: ");
	scanf("%c", &character);
	
	int i;
	int length = strlen(str);
	
	for(i=0; i<length-1; i++){
		
		if(character == str[i]){
			
			count++;
			
		}
	}
	
	printf("Frequency = %d", count);
	
	return 0;
}
