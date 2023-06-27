#include <stdio.h>
struct  Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};


int main()
{
    struct Student student1;
    // student1.name = "mahdi"; => error
    // student1.major = "computer science"; => error
    strcpy(student1.name, "mahdi");
    strcpy(student1.major, "computer science");
    student1.age = 20;
    student1.gpa = 3.2;
    printf("%s\n", student1.name);
    printf("%s\n", student1.major);
    printf("%d\n", student1.age);
    printf("%f\n", student1.gpa);

    struct Student student2;
    printf("enter name: ");
    scanf("%s", student2.name);
    printf("enter major: ");
    scanf("%s", student2.major);
    printf("enter age: ");
    scanf("%d", &student2.age);
    printf("enter gpa: ");
    scanf("%lf", &student2.gpa);
    printf("%s\n", student2.name);
    printf("%s\n", student2.major);
    printf("%d\n", student2.age);
    printf("%f\n", student2.gpa);
    

    return 0;
}
