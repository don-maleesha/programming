#include <stdio.h>

int main() {
	
	int a = 2;
	
	printf("%d\n", a); // 2

	printf("%d\n", ++a); // reason for this output is that the value of a is incremented by 1 before it is used in the printf statement. Therefore, the value of a is 2 before the increment operation, and it becomes 3 after the increment operation. As a result, the output of the printf statement is 3.

	printf("%d\n", --a); // reason for this output is that the value of a is decremented by 1 before it is used in the printf statement. Therefore, the value of a is 3 before the decrement operation, and it becomes 2 after the decrement operation. As a result, the output of the printf statement is 2.

	printf("%d\n", a--); // reason for this output is that the value of a is used in the printf statement before it is decremented by 1. Therefore, the value of a is 2 before the decrement operation, and it remains 2 after the decrement operation. As a result, the output of the printf statement is 2.

	printf("%d\n", a++); // reason for this output is that the value of a is used in the printf statement before it is incremented by 1. Therefore, the value of a is 2 before the increment operation, and it remains 2 after the increment operation. As a result, the output of the printf statement is 2.

	a++;
	printf("%d\n", a); // 3 
	/*reason for this output is that the value of a is incremented by 1 before it is used in the printf statement. 
	Therefore, the value of a is 2 before the increment operation, and it becomes 3 after the increment operation. 
	As a result, the output of the printf statement is 3. */
	
	return 0;
	
}
