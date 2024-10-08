#include <stdio.h>

struct student {
    char name[20];
    int age;
    double gpa;
};

int main(){
    struct student students[20];
    int i, stNO;

    for(i = 0; i < 20; i++){
        printf("Enter student %d name: ", i + 1);
        getchar(); // To clear the buffer from previous input
        fgets(students[i].name, 20, stdin);
        
        printf("Enter student %d age: ", i + 1);
        scanf("%d", &students[i].age);
        
        printf("Enter student %d gpa: ", i + 1);
        scanf("%lf", &students[i].gpa);
        
        printf("You entered student %d details.\n\n", i + 1);
    }

    printf("Enter the student number you want to see the details of: ");
    scanf("%d", &stNO);

    printf("Student %d name: %s", stNO, students[stNO - 1].name);
    printf("Student %d age: %d\n", stNO, students[stNO - 1].age);
    printf("Student %d gpa: %f\n", stNO, students[stNO - 1].gpa);

    return 0;
}

