#include <stdio.h>

struct Car {
	
	char *engineType;
	char *fuelType;
	int fuelTankCapacity;
	int seatingCapacity;
	float cityMileage;
};

int main(){
	
	struct Car car1;
	struct Car car2;
	
	car1.engineType = "DDis 190 Engine";
	car1.fuelType = "Petrol";
	car1.fuelTankCapacity = 37;
	car1.seatingCapacity = 5;
	car1.cityMileage = 19.74;
	
	printf("Car1 engine type = %s\n", car1.engineType);
	printf("Car1 fuel type = %s\n", car1.fuelType);
	printf("Car1 fuel tank capacity = %d\n", car1.fuelTankCapacity);
	printf("Car1 seating capacity = %d\n", car1.seatingCapacity);
	printf("Car1 city mileage = %f\n", car1.cityMileage);
	
	printf("Enter the engine type of car2: ");
	scanf("%s", &car2.engineType);
	printf("Enter the fuel type of car2: ");
	scanf("%s", &car2.fuelType);
	printf("Enter the fuel tank capacity of car2: ");
	scanf("%d", &car2.fuelTankCapacity);
	printf("Enter the seating capacity type of car2: ");
	scanf("%d", &car2.seatingCapacity);
	printf("Enter the city mileage of car2: ");
	scanf("%f", &car2.cityMileage);
	
	printf("Car2 engine type = %s\n", car2.engineType);
	printf("Car2 fuel type = %s\n", car2.fuelType);
	printf("Car2 fuel tank capacity = %d\n", car2.fuelTankCapacity);
	printf("Car2 seating capacity = %d\n", car2.seatingCapacity);
	printf("Car2 city mileage = %f\n", car2.cityMileage);
}
