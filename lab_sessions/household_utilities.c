#include <stdio.h>

int main(){
	
	float electricity, water, gas;
	
	printf("Enter the electricity consumption in kWh: ");
	scanf("%f", &electricity);
	printf("Enter the water consumption in gallons: ");
	scanf("%f", &water);
	printf("Enter the gas consumption in therms: ");
	scanf("%f", &gas);
	printf("\n");
	
	float electricity_cost, water_cost, gas_cost, total_cost;
	
	electricity_cost = electricity * 0.15;
	water_cost = water * 0.005;
	gas_cost = gas * 1.20;
	
	total_cost = electricity_cost + water_cost + gas_cost;
	
	printf("Cost for Electricity: $%.2f\n", electricity_cost);
	printf("Cost for Water: $%.2f\n", water_cost);
    printf("Cost for Gas: $%.2f\n", gas_cost);
    printf("Total Utility Cost: $%.2f\n", total_cost);
    
    return 0;
}
