#include <stdio.h>

int main() {
    // Array of pointers to string literals
    char *names[] = {"Alice", "Bob", "Charlie"};

    printf("Names of students:\n");

	int i;
	
    for (i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}

