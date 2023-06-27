#include <stdio.h>

int main()
{
    char line[255];
    FILE * Fpointer = fopen("employees.txt", "r");
    
    fgets(line, 255, Fpointer);

    printf("%s", line); //prints the first line of the file

    fgets(line, 255, Fpointer);

    printf("%s", line); //prints the second line of the file

    fclose(Fpointer);
}