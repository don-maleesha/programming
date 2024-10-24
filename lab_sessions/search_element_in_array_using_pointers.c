#include <stdio.h>

int main(){
	
	int n;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	int array[n];
	int *ptr = array;
	
	int i;
	
	printf("Enter the elements: ");
	for(i=0; i<n; i++){
		
		scanf("%d", (ptr+i));
		
	}
	
	int search_no, index;
	
	printf("Enter the element to search: ");
	scanf("%d", &search_no);
	
	for(i=0; i<n; i++){
		
		if(*(ptr+i) == search_no){
			
			index = i;
			break;
			
		}
		
	}
	
	printf("Elements found at index: %d", index);
	
	return 0;
	
}
