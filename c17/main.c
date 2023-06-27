#include <stdio.h>
#include <stdbool.h>


int main()
{
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    bool outOfGuesses = false;
    do
    {
        printf("Guess the number: ");
        scanf("%d", &guess);
        guessCount++;
        if (guessCount == 3)
        {
            outOfGuesses = true;
            printf("You lose!");
            break;
        }
        
    } while (guess != secretNumber);
    if (outOfGuesses == false)
    {
        printf("You win!");
    }
    
    
}