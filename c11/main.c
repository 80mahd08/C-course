#include <stdio.h>

int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};

    array[5] = 100;

    printf("%d \n" ,array[5] );

    int array2[2];

    array2[0] = 100;
    array2[1] = 200;
    printf("%d \n" ,array2[0] );

    char array3[2];
    array3[0] = 'a';
    array3[1] = 'b';
    printf("%c \n" ,array3[0] );


    
}


