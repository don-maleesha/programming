#include <stdio.h>

// Function to validate input
int validate_input(const char *input, const char *field_name) {

    if (input[0] == '\0') {

        printf("%s cannot be empty\n", field_name);
        return 0;

    }

    return 1;

}

int main() {

    const char *username = "JohnDoe";
    const char *password = "";

    // Using the same function to validate both username and password
    if (!validate_input(username, "Username")) {

        return 1;

    }

    if (!validate_input(password, "Password")) {

        return 1;

    }

    printf("Both inputs are valid.\n");
    return 0;

}
