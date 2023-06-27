#include <stdio.h>

int main()
{
    int age = 20;
    int *pAge = &age;
    double gpa = 3.4;
    double *pGpa = &gpa;
    char grade = 'A';
    char *pGrade = &grade;
    
    printf("age value: %d\n", age);
    printf("age memory address: %p\n", &age);

    printf("pAge value: %p\n", pAge);

    *pAge = 21;
    printf("new age value: %d\n", age);

 

    return 0;
}