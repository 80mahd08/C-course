//! Collatz Conjecture
#include <stdio.h>

int main()
{
    int numberGiven;
    printf("Enter a number: ");
    scanf("%d", &numberGiven);
    do
    {
        if (numberGiven % 2 == 0)
        {
            numberGiven /= 2;
            
        }else if (numberGiven % 2 != 0)
        {
            numberGiven = numberGiven * 3 + 1;
        }

        int i = 0;
        for ( i = 1; i <= numberGiven; i++)
        {
            if(numberGiven == i){
                printf("* => %d" , numberGiven);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    } while (numberGiven != 1);

    
    return 0;
}