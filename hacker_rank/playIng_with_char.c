#include <stdio.h>

int main(){
	
	char ch;
	char s[100];
	char sen[100];
	
	scanf("%c\n", &ch);          // Read a single character
	//scanf("\n");               // Consume the newline character
	scanf("%[^\n]%*c", s);     // Read a string until a newline is encountered
	scanf("%[^\n]%*c", sen);   // Read another string until a newline is encountered
	
	printf("%c\n", ch);        // Print the single character
	printf("%s\n", s);         // Print the first string
	printf("%s\n", sen);       // Print the second string
	
	return 0;
}

