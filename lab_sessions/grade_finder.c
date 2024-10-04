#include <stdio.h>

int main(){
	
	float mark1, mark2;
	
	printf("Enter your marks: ");
	scanf("%f %f", &mark1, &mark2);
	
	float average = (mark1 + mark2) / 2;
	printf("Average = %f\n", average);
	
	if((average >= 75) && (average <=100)){
		printf("A");
	} else if ((average >= 65) && (average <75)){
		printf("B");
	} else if ((average >= 55) && (average <65)) {
		printf("C");
	} else if ((average >= 35) && (average <55)) {
		printf("D");
	} else if ((average >= 0) && (average <35)) {
		printf("E");
	}
	
	return 0;
	
	
}
