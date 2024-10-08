#include <stdio.h>

int main() {
    int x = 10;            // x is a regular integer
    const int *ptr = &x;   // ptr is a pointer to a constant integer

    // *ptr = 20;  // This will cause a compilation error because ptr points to a const int

    x = 20;  // This is allowed since x is a regular int

    printf("x = %d\n", x);  // Output: x = 20

    int y = 30;
    ptr = &y;  // This is allowed, changing the pointer to point to y

    printf("y = %d\n", *ptr);  // Output: y = 30

    return 0;
}

