#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];
    int *ptr = array;

    printf("Enter the elements of the array:\n");
    
    int i;

    for(i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    printf("Original Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    int newarray[n];

    for(i = 0; i < n; i++) {
        newarray[i] = *(ptr + i);
    }

    printf("Copied Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", newarray[i]);
    }
    printf("\n");

    return 0;
}

