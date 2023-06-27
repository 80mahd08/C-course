#include <stdio.h> 

int dispAge(int *age)
{
    printf("disp age : %d\n" , *age);
    return 0;
}

int main()
{
    int age = 20;
    int *pAge = &age;


    printf("%d\n" , *pAge);

    printf("%d\n" , *&age);

    *pAge = 21;

    printf("%d\n" , age);


    dispAge(pAge);
    dispAge(&age);

    printf("%d\n" , **pAge);

    return 0;
}