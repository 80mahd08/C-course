#include <stdio.h>
#include <string.h>

int main()
{
    // this is similer to for loop
    int i = 0;
    while (i < 5)
    {
        printf("%d" , i);
        i++;
    }

    
    for (int i = 0; i < 5; i++)
    {
        printf("%d" , i);
    }
    printf("\n");
    char stringExample[] = "Hello";
    int length = strlen(stringExample);

    printf("string length is %d", length);


    printf("\n");

    int arrayExample[5] = {1,2,3,4,5};
    int arrayLength = sizeof(arrayExample)/sizeof(arrayExample[0]);
    printf("array length is %d\n", arrayLength);
    for (int i = 0; i < arrayLength; i++)
    {
        printf("%d" , arrayExample[i]);
    }
    printf("\n");
    //arry of string expamle
    char stringArray[5][10] = {"Hello", "World", "How", "Are", "You"};
    printf("string nunber 1 is %s", stringArray[0]);   
}