#include <stdio.h>

void displayString(char str[]);

int main(){
	
	char str[50];
	
	printf("Enter string: ");
	
	fgets(str, sizeof(str), stdin);
	displayString(str);
	return 0;
	
}

void displayString(char str[]){
	
	printf("String output: ");
	puts(str);
}
