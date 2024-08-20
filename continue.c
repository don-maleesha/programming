#include <stdio.h>

int main(){
	
	int a = 1;
	
	while(a <= 8){
		
		if(a==3){
			
			a++;
			continue;
			
		}
		printf("%d\n", a);
		a++;
		 
	}

}
