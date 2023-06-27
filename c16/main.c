#include <stdio.h>
int main()
{
    int index = 1;
    while (index <= 5)
    {
        printf("%d\n", index);
        index++;
    }

    // infinet loop
    /*
    while (1)
    {
        printf("Infinet loop\n");
    }
    */

   // do while loop
   index = 6;
   do
   {
        printf("%d\n", index);
        index++;
   } while (index <= 5);
   
    
    
}