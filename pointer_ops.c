#include <stdio.h>

int main(){
	
	int x=4, y=2, *p1, *p2, sum, sub, mul, div, mod;
	p1 = &x;
	p2 = &y;
	
	sum = *p1 + *p2;
	sub = *p1 - *p2;
	mul = *p1 * *p2;
	div = *p1 / *p2;
	mod = *p1 % *p2;
	
	printf("%d\n", sum);
	printf("%d\n", sub);
	printf("%d\n", mul);
	printf("%d\n", mod);
	printf("%d\n", div);
}
