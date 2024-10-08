#include <stdio.h>

int main(){
	
	int x = 5, y = 20;
	
	int *ptr = &x;
	
	
	printf("value of ptr = %d\n", ptr);
	printf("address of x = %d\n", &x);
	printf("address of ptr = %d\n", &ptr);
	
	//value of ptr = address of x
	printf("value of x: %d\n", x);
	printf("value of x: %d\n", *ptr);
	
	*ptr = 10;
	printf("value of x: %d\n", x);	
	
	int *ptr2;
	
	ptr2 = ptr;
	ptr2 = &y;
	*ptr2 = *ptr;
	
	printf("%d, %d\n", ptr, ptr2);
	printf("%d, %d\n", *ptr, *ptr2);
}
