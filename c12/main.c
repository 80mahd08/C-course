#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int puissonce(int num , int puis)
{
    if(puis == 0){
        return 1;
    }
    return num * puissonce(num , puis - 1);
}

void sayHello(char name[] , int age)
{
    printf("Hello %s\n", name);
    printf("Your age is %d\n", age);
}

void main()
{
    printf("sum of 2 and 3 is %d", sum(2, 3));
    printf("\n");
    sayHello("mahdi" , 20);
    printf("puis of 3 of 2 is %d", puissonce(2, 3));
}

