#include <stdio.h>

int main() {
    int x[2][2] = {{3, 2}, {4, 9}};
    float y[5][4];

    y[1][2] = 22.3;
    y[3][3] = 3.14;
    y[0][3] = 45.65;
    y[4][0] = 98.3;
    y[3][1] = 100;
    y[3][0] = 200;

    printf("value of x[1][1] = %d\n", x[1][1]);

    int rows = sizeof(y) / sizeof(y[0]);
    int columns = sizeof(y[0]) / sizeof(float);

    printf("No of rows in y = %d\n", rows);
    printf("No of columns in y = %d\n", columns);
    
    int i, j;

    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < columns; j++)
            printf("y[%d][%d] = %.2f\n", i, j, y[i][j]);
    }

    return 0;
}

