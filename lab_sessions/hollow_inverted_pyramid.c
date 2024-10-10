#include <stdio.h>

int main() {
    
    int i, j;
    int height;
    
    printf("Enter the height of the inverted pyramid: ");
    scanf("%d", &height);
    
    for(i = 0; i < height; i++) {
       
        for(j = 0; j < i; j++) {
            printf(" ");
        }
        
        printf("*"); 
        
        if(i != height - 1) {
            for(j = 0; j < (2 * (height - i) - 3); j++) {
                printf(" ");
            }
            if(i != height - 1) {
                printf("*"); 
            }
        }
        
        printf("\n");
    }
    
    return 0;
}

