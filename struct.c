#include <stdio.h>

// Define the date_type structure first
struct date_type {
    int dd, mm, yy;
};

// Define the student structure
struct student {
    char name[40];
    char regNo[10];
    int age;
    double gpa;
    struct date_type birthday;
};

int main() {
    // Use the name of the structure to get its size
    printf("Size of student: %lu\n", sizeof(struct student));
    
    // Declare variables of the student structure
    struct student st1;
    struct student st2 = {
        "Vidura Nishantha", "20/is/012", 24, 3.4, {1, 1, 2000} // Initialize with default birthday
    };
    
    // Assign values to st1 fields
    st1.age = 21;
    st1.gpa = 3.5;
    st1.birthday.dd = 31;
    st1.birthday.mm = 4;
    st1.birthday.yy = 1998;
    
    // Print details of student 1
    printf("Student 1 age: %d\n", st1.age);
    printf("Student 1 GPA: %lf\n", st1.gpa);
    
    // Print details of student 2
    printf("Student 2 age: %d\n", st2.age);
    printf("Student 2 GPA: %lf\n", st2.gpa);
    
    // Work with date_type structure
    struct date_type birthday = {19, 7, 2020};
    struct date_type bday = birthday;
    struct date_type yesterday = {9,9,2024
	};
    
    // Print birthday details
    printf("Birthday: %d/%d/%d\n", bday.dd, bday.mm, bday.yy);
    
    if(bday.yy<=yesterday.yy){
    	printf("Hello");
	} else {
		printf("Bye");
	}
    return 0;
}

