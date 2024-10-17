#include <stdio.h>
#include <string.h>

int main() {
    const char *games[] = {"The Last of Us", "God of War", "Bloodborne"};
    int n = sizeof(games) / sizeof(games[0]);  // Calculate the number of elements in the array
    const char *target = "God of War";
    
    int i;
    for (i = 0; i < n; i++) {
        if (strcmp(games[i], target) == 0) {  // Use strcmp() for string comparison
            printf("The index of 'God of War' is: %d\n", i);
            break;
        }
    }

    if (i == n) {
        printf("'God of War' not found in the array.\n");
    }

    return 0;
}

