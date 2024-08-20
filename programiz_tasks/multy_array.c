#include <stdio.h>

int main() {
    int x, y;

    printf("Enter sizes: ");
    scanf("%d %d", &x, &y);

    int matrix[x][y];
    int matrix2[x][y];
    int matrix3[x][y];

int i, j;
    printf("Enter elements for the first matrix:\n");
    for( i = 0; i < x; i++) {
        for( j = 0; j < y; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("First matrix:\n");
    for( i = 0; i < x; i++) {
        for( j = 0; j < y; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements for the second matrix:\n");
    for( i = 0; i < x; i++) {
        for( j = 0; j < y; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Second matrix:\n");
    for( i = 0; i < x; i++) {
        for( j = 0; j < y; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("Sum of the matrices:\n");
    for( i = 0; i < x; i++) {
        for( j = 0; j < y; j++) {
            matrix3[i][j] = matrix[i][j] * matrix2[i][j];
            printf("%d\t", matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

