#include <stdio.h>

int main() {
    float rent, utilities, groceries, transportation, entertainment, miscellaneous, total;
    
    printf("Enter the amount spent on Rent/Mortgage: ");
    scanf("%f", &rent);
    printf("Enter the amount spent on Utilities: ");
    scanf("%f", &utilities);
    printf("Enter the amount spent on Groceries: ");
    scanf("%f", &groceries);
    printf("Enter the amount spent on Transportation: ");
    scanf("%f", &transportation);
    printf("Enter the amount spent on Entertainment: ");
    scanf("%f", &entertainment);
    printf("Enter the amount spent on Miscellaneous: ");
    scanf("%f", &miscellaneous);
    
    total = rent + utilities + groceries + transportation + entertainment + miscellaneous;
    
    printf("Total Monthly Expenses: $%.2f\n", total);
    
    printf("Percentage spent on:\n");
    printf(" - Rent/Mortgage: %.2f%%\n", (rent / total) * 100);
    printf(" - Utilities: %.2f%%\n", (utilities / total) * 100);
    printf(" - Groceries: %.2f%%\n", (groceries / total) * 100);
    printf(" - Transportation: %.2f%%\n", (transportation / total) * 100);
    printf(" - Entertainment: %.2f%%\n", (entertainment / total) * 100);
    printf(" - Miscellaneous: %.2f%%\n", (miscellaneous / total) * 100);
    
    return 0;
}

