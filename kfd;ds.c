#include <stdio.h>

int main(){

    int *vPtr1, *vPtr2;
    
    int array[5] = {10, 20, 30, 40, 50};
    int temp;
    
    vPtr1 = array;
    
    printf("Address of vPtr1: %d\n", &vPtr1);
    printf("Value of vPtr1: %d\n", vPtr1);
    printf("Address of array: %d\n", &array);
    printf("\n");
    
    vPtr1 += 2;
    printf("Address of vPtr1 + 2: %d\n", &vPtr1);
    printf("Value of vPtr1 + 2: %d\n", vPtr1);
    printf("\n");
    
    vPtr1 += 2;
    printf("Address of vPtr1 + 4: %d\n", &vPtr1);
    printf("Value of vPtr1 + 4: %d\n", vPtr1);
    printf("\n");
    
    vPtr2 = &array[2];
    vPtr1 = &array[0];
    
    temp = vPtr2 - vPtr1;
    
    printf("Contents of temp:%d\n", temp);
}