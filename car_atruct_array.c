#include <stdio.h>

struct Car {
    char engineType[20];
    char fuelType[20];
    int fuelTankCapacity;
    int seatingCapacity;
    float cityMileage;
};

int main() {
    struct Car car[2];
    int i;
    
    for(i = 0; i < 2; i++) {
    	printf("Car %d:\n", i + 1);
        printf("Car %d engine type: ", i + 1);
        scanf("%s", car[i].engineType);
        printf("Car %d fuel type: ", i + 1);
        scanf("%s", car[i].fuelType);
        printf("Car %d fuel tank capacity: ", i + 1);
        scanf("%d", &car[i].fuelTankCapacity);
        printf("Car %d seating capacity: ", i + 1);
        scanf("%d", &car[i].seatingCapacity);
        printf("Car %d city mileage: ", i + 1);
        scanf("%f", &car[i].cityMileage);
        printf("\n");
    }
    
    printf("\nCar Details:\n");
    for(i = 0; i < 2; i++) {
        printf("Car %d:\n", i + 1);
        printf("  Engine Type: %s\n", car[i].engineType);
        printf("  Fuel Type: %s\n", car[i].fuelType);
        printf("  Fuel Tank Capacity: %d liters\n", car[i].fuelTankCapacity);
        printf("  Seating Capacity: %d\n", car[i].seatingCapacity);
        printf("  City Mileage: %.2f kmpl\n", car[i].cityMileage);
    }

    return 0;
}

