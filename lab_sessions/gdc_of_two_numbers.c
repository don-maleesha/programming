#include <stdio.h>

int main(){
    
    int number1, number2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);
    
    int i = 1, j = 1;
    int divisor1, divisor2;
    
    printf("Divisors of number1: ");
    while(i <= number1){
        divisor1 = number1 % i;
        if(divisor1 == 0){
            printf("%d, ", i);
        }
        i++;
    }
    
    printf("\n");
    
    printf("Divisors of number2: ");
    while(j <= number2){
        divisor2 = number2 % j;
        if(divisor2 == 0){
            printf("%d, ", j);
        }
        j++;
    }
    
    int gcd;

    while (number2 != 0) {
        int temp = number2;
        number2 = number1 % number2;
        number1 = temp;
    }
    
    gcd = number1;

    printf("\nThe GCD of %d and %d is: %d\n", number1, number2, gcd);
    
    return 0;
}

