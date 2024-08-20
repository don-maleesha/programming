#include <stdio.h>

int main(){
	
	char str[] = "Hello";
	
	printf("%s\n", str);
	
	int i;
	
	for(i = 0; i<=5; i++){
		
		printf("%c", str[i]);
		
	}
	
	char name[100];
	
	printf("Enter the name: ");
	scanf("%s", name);
	
	printf("Name = %s\n", name);
	
	
	
	char address[100];
	printf("enter the address: ");
	
	gets(address);
	
	printf("your address: ");
	
	puts(address);
	
	return 0;
}
