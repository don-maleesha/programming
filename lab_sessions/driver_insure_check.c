#include <stdio.h>
#include <string.h> // Needed for strcmp()

int main() {
    int age;
    char sex, marital_status[10];
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your gender (m/f): ");
    scanf(" %c", &sex); // Use %c for single characters and a space to handle newline
    
    printf("Enter marital status (married/unmarried): ");
    scanf("%s", marital_status); // Reading string for marital status

    // Corrected conditions using strcmp() for string comparison and == for character comparison
    if ((strcmp(marital_status, "married") == 0) || 
        (strcmp(marital_status, "unmarried") == 0 && sex == 'm' && age > 30) ||
        (strcmp(marital_status, "unmarried") == 0 && sex == 'f' && age > 25)) {
        
        printf("Driver is insured\n");
    } else {
        printf("Driver is not insured\n");
    }
    
    return 0;
}

