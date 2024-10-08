#include <stdio.h>

int main(){
	
	int n=15, x;
	
	int *ptr = &n;
	
	x = *ptr;
	
	printf("%d\n", &n);
	printf("%d\n", ptr);
	
	
	printf("%d\n", *ptr);
	printf("%d\n", x);
}
