#include <stdio.h>

void main(){
	
	int b[5] = {10,20,30,40,50};
	
	int *bPtr;
	int i, offset;
	
	bPtr = b;
	printf("array b is using a counter...\n");
	for(i=0; i<5; i++)
	printf("b[%d] = %d\n", i, b[i]);
	
	printf("printing using pointer/offset notation whate pointer is the array name..\n");
		for(offset=0; offset<5; offset++)
		printf("b[%d] = %d\n", offset,*(b+offset));
	
	printf("address of array b: %d\n", &b);
	printf("value of bPtr: %d\n", bPtr);
	printf("element 3: %d\n", b[0]);
	printf("element 3: %d\n", *(bPtr));
	printf("element 3: %d\n", b[3]);
	printf("element 3: %d\n", *(bPtr+3));
	printf("element 3: %d\n", bPtr[3]);
	printf("element 3: %d\n", *(b+3));
}
