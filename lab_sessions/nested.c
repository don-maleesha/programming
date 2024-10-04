#include <stdio.h>

struct date {
    int d, m, y;
};

struct student {
    char name[50];
    char reg[20];
    struct date bday;
    double gpa;
    struct student *s4;
};

int main() {
    // Declare two student structures
    struct student s1 = {"Vidura Perera", "2002CS001", {9, 2, 1980}, 3.8};
    struct student s2;

    // Manually assign values to s2's birthdate
    s2.bday.d = 3;
    s2.bday.m = 3;
    s2.bday.y = 1980;
    

    // Output the birthdate of student s2
    printf("%d, %d, %d\n", s2.bday.d, s2.bday.m, s2.bday.y);

    return 0;
}

