#include <stdio.h>

int main (){
	
	int b[5] = {10, 20, 30, 40, 50};
	int *bPtr;
	int i;
	
	bPtr = b;
	
	printf("Address of array b : %d\n", &b);
	printf("Value of bPtr = %d\n", bPtr);
	printf("Element 4: %d\n", b[3]); //counter with the array name
	printf("Element 4: %d\n", *(bPtr+3)); //Called pointer/offset notation
	printf("Element 4: %d\n", bPtr[3]);	//Called pointer/subscript notation
	printf("Element 4: %d\n", *(b+3)); //Can be accessed by performing pointer arithmetic on the array itself
	
	printf("array b: ");
	for(i=0; i<5; i++){
		
		printf("%d ", *(bPtr+i));
	}
	return 0;
}
