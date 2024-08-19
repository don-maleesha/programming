#include <stdio.h>

int main() {
	
	int a = 0;
	int b = 1;
	int c;
	int d;
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	
	c = a || b;
	
	printf("c = %d\n", c);
	
	d = a && b;
	
	printf("d = %d\n", d);
	
	return 0;

}
