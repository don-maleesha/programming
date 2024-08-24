/*
Kamal visited a bookshop and purchased the following items: two CR books, two red pens and one highlighter.
The prices of these items per unit are CR books cost 165.00 each, red pens cost 25.00 each, and the highlighter costs 100.00.
Write a C program to calculate the total cost of these stationery items that Kamal bought.
*/

#include <stdio.h>

int main(){
	
	float cr_book, red_pen, highlighter, total_cost;
	
	cr_book = 165.00;
	red_pen = 25.00;
	highlighter = 100.00;
	
	total_cost = (cr_book * 2) + (red_pen * 2) + highlighter;
	
	printf("Total cost = %.2f", total_cost);
	
	return 0;
	
}
