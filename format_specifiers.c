#include <stdio.h>

int main() {
	
    int x = 4;
    
    float y = 20.42;
    
    char z = 'j';
    
    // Declare and initialize a char variable w with the character 'lk'
    // Multi-character constants are implementation-defined, typically treated as integers
    // 'lk' will be treated as an integer, but only the least significant byte 'k' will be assigned to w
    char w = 'lk';
    
    // Print the value of x using the %d format specifier for integers
    printf("x = %d\n", x);
    
    // Print the value of y using the %f format specifier for floating-point numbers
    printf("y = %f\n", y);
    
    // Print the value of z using the %c format specifier for characters
    printf("z = %c\n", z);
    
    // Print the value of w using the %c format specifier for characters
    // This will print 'k' because 'lk' is treated as an integer and the least significant byte 'k' is stored in w
    printf("w = %c\n", w);
    
    printf("%d\n", 2);
    
    printf("%f\n", 2.01);
    
    printf("%d\n", 2 + 3);
    
    printf("%f\n", 2.3 + 3.5);
    
    printf("%c\n", 'AB');
    
    printf("%c \t %c", 'a', 'b');
    
    // Return 0 to indicate successful completion of the program
    return 0;
}

