#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *fruits[5];
    char *temp;
    int i, j;

    for (i = 0; i < 5; i++) {
        fruits[i] = (char *)malloc(100 * sizeof(char));
        
        printf("Enter String %d: ", i + 1);
        fgets(fruits[i], 100, stdin);
        
    }

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(fruits[i], fruits[j]) > 0) {
                temp = fruits[i];
                fruits[i] = fruits[j];
                fruits[j] = temp;
            }
        }
    }

    printf("\nStrings in alphabetical order:\n");
    for (i = 0; i < 5; i++) {
        printf("%s", fruits[i]);
    }

    return 0;
}

