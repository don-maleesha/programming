#include <stdio.h>

int main() {
    int x = 10;            // x is a regular integer
    int *const ptr = &x;   // ptr is a constant pointer to a regular integer

    *ptr = 20;  // This is allowed, changing the value of x through ptr

    printf("x = %d\n", x);  // Output: x = 20

    int y = 30;
    // ptr = &y;  // This will cause a compilation error because ptr is a constant pointer

    printf("x = %d\n", *ptr);  // Output: x = 20, since ptr still points to x

    return 0;
}

