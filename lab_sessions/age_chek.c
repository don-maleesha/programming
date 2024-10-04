#include <stdio.h>

int main(){
	
	int age;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if(age < 18){
		printf("You are not eligible for work");
	} else if((age > 18) && (age < 60)){
		printf("You are eligible for work");
	} else if (age > 60){
		printf("You are too old to work");
	}
	
	return 0;
}
