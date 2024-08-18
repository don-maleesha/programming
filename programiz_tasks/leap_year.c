#include <stdio.h>

int main(){
	
	int year;
	
	printf("Enter a year: ");
	scanf("%d", &year);
	
	if(((year % 4 == 0) && (year % 100 != 0)) || ((year % 400 == 0))){
		
		printf("It is a leap year.");
		
	} else {
		
		printf("It is not a leap year.");
	}
}
