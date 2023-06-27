#include <stdio.h>

int main()
{
    // FILE * Fpointer = fopen("employees.txt", "w");
    // fprintf(Fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accountant");
    // fclose(Fpointer); 


    FILE * Fpointer = fopen("employees.txt", "a");
    fprintf(Fpointer, "\nKelly, Customer Service");
    fclose(Fpointer); 
    return 0;
}