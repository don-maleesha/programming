#include <stdio.h>

int main() {
	
	int a = 0;
	int b = 1;
	int c;
	int d;
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	
	c = a || b; // 0 or 1 = 1
	
	printf("c = %d\n", c); // reads 1 because a is 0 and b is 1, so at least one of them is true.
	
	d = a && b; // 0 and 1 = 0
	
	printf("d = %d\n", d); // reads 0 because a is 0 and b is 1, so both of them are not true.

	
	/*
	or notation:
	0 * 0 = 0
	0 * 1 = 1
	1 * 0 = 1
	1 * 1 = 1
	*/

	/*
	and notation:
	0 + 0 = 0
	0 + 1 = 0
	1 + 0 = 0
	1 + 1 = 1
	*/
	
	return 0;

}
