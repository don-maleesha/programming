#include <stdio.h>

struct student {
	
	int age;
	char grade;
};

union character {
	int value;
	char letter;
	double points;
};

void main() {
	
	struct student st1;
	union character mychar;
	mychar.value = 65;
	
	
	printf("Memory address of st1.age %d\n", &st1.age);
	printf("Memory addresss of st1.grader: %d\n", &st1.grade);
	printf("\n");
	printf("Memory address of mychar.value: %d\n", &mychar.value);
	printf("Memory address of mychar.letter: %d\n", &mychar.letter);
	printf("\n");
	printf("Size of st1: %d\n", sizeof(st1));
	printf("Size of mychar: %d\n", sizeof(mychar));
	printf("\n");
	printf("mychar.value: %d\n", mychar.value);
	printf("mychar.letter: %c\n", mychar.letter);
	printf("mychar.points: %f\n", mychar.points);		
}
