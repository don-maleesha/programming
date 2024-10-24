#include <stdio.h>

int main(){
	
	char string[100];
	char *ptr = string;
	
	printf("Enter a string: ");
	fgets(string, sizeof(string), stdin);
	
	int count = 0;
	
	while(*ptr != '\0'){
		
		if (*ptr != '\n') {  
		
            count++;
            
        }
        
		ptr++;
		
	}
	
	printf("The number of characters is: %d", count);
	
	return 0;
	
}
