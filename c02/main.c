#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[] = "mahdi";
    int age = 20;
    printf("There once was a man named %s\n", name);
    printf("He was %d years old\n", age);
    printf("He really liked the name %s\n", name);
    age = age + 5;
    printf("But didn't like being %d\n", age);

    return 0;

}
