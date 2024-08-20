#include <stdio.h>
#include <string.h>  // Include this header for string functions like strlen, strcpy, and strcat

int main(){
    
    char str[45];
    
    printf("Enter name: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if it exists
    str[strcspn(str, "\n")] = 0;
    
    printf("Your name: ");
    puts(str);
    
    printf("Length = %lu\n", strlen(str));  // Use %lu for size_t return type from strlen
    
    char str1[45];
    
    char str2[56] = " Your text here";  // Changed from "Fuck" to more appropriate text
    
    printf("str1 = %s\n", strcpy(str1, str));
    
    printf("New = %s\n", strcat(str1 , str2));
    
    return 0;
}

