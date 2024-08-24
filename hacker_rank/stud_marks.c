#include <stdio.h>

// Function prototype
int marks_summation(int n, int m[], char sex);

int main() {
    int no_of_stud;
    
    // Input the number of students
    scanf("%d", &no_of_stud);

    int marks[no_of_stud];
    char gender;
    
    int i;
    // Input the marks
    for( i = 0; i < no_of_stud; i++) {
        scanf("%d", &marks[i]);
    }

    // Input the gender
    scanf(" %c", &gender);  // Added space before %c to consume the newline character left by the previous input

    // Corrected function call
    int result = marks_summation(no_of_stud, marks, gender);

    // Output the result
    printf("Sum = %d\n", result);

    return 0;
}

// Function to sum marks based on gender
int marks_summation(int n, int m[], char sex) {
    int sum = 0;
	int i;
    if (sex == 'g') {  // Use 'g' in single quotes to compare a character
        for ( i = 0; i < n; i++) {
            sum += m[i];  // Sum all marks
        }
    } else {  // Assume 'b' for boys, summing only for male students
        for ( i = 1; i < n; i++) {
            sum += m[i];  // Sum all marks
        }
    }

    return sum;
}

