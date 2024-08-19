#include <stdio.h>  // Include the standard input-output library

int main() {
    // Declare a float variable 'x'
    float x;
    
    // Declare and initialize an integer variable 'y' with the value 8
    int y = 8;
    
    // Assign the value of 'y' to 'x'. Implicit conversion happens here, 
    // where the integer 'y' is converted to a float and assigned to 'x'.
    x = y;
    
    // Print the value of 'x' as a float. Since 'y' was 8 and is now assigned 
    // to 'x', this will print "8.000000" because of the float format.
    printf("%f\n", x);
    
    // Declare an integer variable 'a'
    int a;
    
    // Declare and initialize a float variable 'b' with the value 5.59
    float b = 5.59;
    
    // Explicitly convert the float 'b' to an integer and assign it to 'a'.
    // This truncates the decimal part, so 'a' will be 5.
    a = (int) b;
    
    // Print the value of 'a' as an integer. This will print "5".
    printf("%d\n", a);
    
    
    // Return 0 to indicate successful execution of the program
    return 0;
}

