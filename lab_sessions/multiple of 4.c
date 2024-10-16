#include <stdio.h>

int main(){
	
	int i = 1;
	
	do {
		
		if(i%4==0){
			
			printf("%d\n", i);
			
		}
		
		i++;
		
	} while(i<=50);
	
	return 0;
	
}
