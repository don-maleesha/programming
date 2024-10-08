#include <stdio.h>

int main(){
	
	int age=20;
	
	printf("values of the age = %d\n", age); //20
	printf("Memory address of age= %d\n", &age); //6487572
	
	int *ageptr;
	ageptr = &age;
	
	printf("value of the ageptr: %p\n", ageptr); //000000000062FE14
	printf("values of the memory addrresss of age: %d\n", *ageptr); //20
}
