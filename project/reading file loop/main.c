#include <stdio.h>

#define MAX_LENGTH 256

int main() {
    FILE* file = fopen("employees.txt", "r");  // Open the file in read mode

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    char buffer[MAX_LENGTH];

    while (fgets(buffer, MAX_LENGTH, file) != NULL) {
        printf("%s", buffer);
    }

    if (ferror(file)) {
        printf("Error reading the file.\n");
    }

    fclose(file);  // Close the file

    return 0;
}
