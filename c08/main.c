#include <stdio.h>

void main()
{
    // char name[20];
    // int age ;
    // double height;
    // char grade;
    // printf("enter your name : ");
    // scanf("%s", name);
    // printf("enter your age : ");
    // scanf("%d",&age);
    // printf("enter your grade : ");
    // scanf(" %c",&grade);
    // printf("enter your height : ");
    // scanf(" %lf",&height);



    // printf("hello %s\n",name);
    // printf("you are %d years old\n",age);
    // printf("you are %c grade\n",grade);
    // printf("you are %.2lf cm tall\n",height);

    // problem in scanf is that if type name with spacs like 'mahdi amari' it well store onli mahdi

    // to solve this problem we use fgets

    // fgets is used to get string from user as line and store it in char array

    char name1[20];
    printf("enter your name : ");
    fgets(name1,20,stdin);
    printf("hello %s 1547856",name1);


}