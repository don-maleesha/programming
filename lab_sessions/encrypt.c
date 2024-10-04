#include <stdio.h>

#define SIZE 26

char encrypt(char *let, int *fact);
int main(){
	
	char l, eL;
	int f;
	
	printf("Letter: ");
	scanf("%c", &l);
	
	printf("factor: ");
	scanf("%d", &f);
	
	f = f%26;
	
	printf("letter: %c", encrypt(&l, &f));
	
}

 char encrypt(char *let, int *fact){
 	
 	if(*let+*fact>'Z'){
 		return *let+*fact -SIZE;
	 } else {
	 	return *let+*fact;
	 }
 }
