#include <stdio.h>

struct item {
	double price;
	
	union {
		
		struct {
			
			int id;
			char *title;
			char *author;
		}book;
		
		struct{
			
			int flavour;
			int weight;
			
		} cake;
		
	}product;
};

int main(){
	
	struct item itm;
	
	itm.product.cake.flavour=1;
	itm.product.cake.weight=400;
	
	printf("Flavour: %d\n", itm.product.cake.flavour);
}
