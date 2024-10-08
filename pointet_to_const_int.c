#include <stdio.h>

int main() {
    const int x = 10;  // x is a constant integer
    int *ptr = &x;     // ptr is a pointer to x

    *ptr = 20;  // Attempt to modify the value of x through ptr

    printf("x = %d\n", x);  // Print the value of x

    return 0;
}

