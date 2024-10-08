#include <stdio.h>

int main() {
    const int x = 10;          // x is a constant integer
    const int *const ptr = &x; // ptr is a constant pointer to a constant integer

    // *ptr = 20;  // This will cause a compilation error because *ptr is a constant

    // int y = 30;
    // ptr = &y;   // This will cause a compilation error because ptr is a constant pointer

    printf("x = %d\n", x);     // Output: x = 10
    printf("*ptr = %d\n", *ptr); // Output: *ptr = 10

    return 0;
}

