#include <stdio.h>

void swap(int *x, int *y){
	
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	
	int a, b;
	printf("Enter number 1: ");
	scanf("%d", &a);
	printf("Enter number 2: ");
	scanf("%d", &b);
	
	printf("Before swap: %d, %d\n", a, b);
	
	swap(&a, &b);
	
	printf("After swap: %d, %d\n", a, b);
	
}
