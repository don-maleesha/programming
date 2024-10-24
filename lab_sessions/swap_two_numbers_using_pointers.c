#include <stdio.h>

int main(){
	
	int a, b;
	int *aptr = &a;
	int *bptr = &b;
	
	printf("Enter two integers: ");
	scanf("%d %d", aptr, bptr);
	
	printf("Before swapping: a = %d, b = %d\n", *aptr, *bptr);
	
	int temp = *aptr;
	*aptr = *bptr;
	*bptr = temp;
	
	printf("After swapping: a = %d, b = %d\n", *aptr, *bptr);
	
	return 0;
}
