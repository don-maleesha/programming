#include <stdio.h>

int sum(int n);

int main(){
	
	int num;
	
	printf("Enter: ");
	scanf("%d", &num);
	
	int result = sum(num);
	
	printf("%d", result);
	
	return 0;
	
}

int sum(int n){
	
	if (n == 0)
		return 0;
	else
		return n + sum(n - 1);
}
