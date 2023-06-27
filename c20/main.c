#include <stdio.h>

int main()
{
    int age = 20;
    double gpa = 3.4;
    char grade = 'A';

    printf("memory address of age is %p\n", &age);// value &age is the memory address of age (where c store age)
    printf("memory address of gpa is %p\n", &gpa);// value &gpa is the memory address of gpa (where c store gpa)
    printf("memory address of grade is %p\n", &grade);// value &grade is the memory address of grade (where c store grade)

     
    
    return 0;
}