//Write a C program to get firstName, lastName as user input and display the result

#include <stdio.h>

int main(){
	
	char firstName[50];
	char lastName[50];
	
	printf("enter your first name: ");
	scanf("%s", firstName);
	
	printf("enter your last name: ");
	scanf("%s", lastName);
	
	printf("hello %s", firstName);
	
	return 0;
}
