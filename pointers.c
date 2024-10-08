#include <stdio.h>

int main(){
	
	int num = 10;
	
	printf("%d\n", &num); //memory address in int
	
	int *p = &num;
	
	printf("%d\n", p); // memory address in int
	
	printf("%d\n", *p); //value
	printf("%p\n", p); // p is the correct format specifier for the memory address
}
