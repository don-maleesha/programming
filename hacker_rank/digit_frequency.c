#include <stdio.h>

int main(){
	
	char str[100];
	int digit[10] = {0};
	
	scanf("%s", str);
	
	int i;
	
	for(i=0; i<strlen(str); i++){
		
		if(str[i] >= 48 && str[i] <= 57){
			digit[str[i]-48]++;
		}
	}
	
	for(i=0; i<10; i++){
		printf("%d ", digit[i]);
	}
	
	return 0;
}
