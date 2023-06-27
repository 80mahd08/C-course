#include <stdio.h>

int main()
{
    while (1)
    {
        printf("*** Simple Calculator ***\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        int choise;
        int first_number , second_number;
        printf("Enter your choise: ");
        scanf("%d", &choise);
        if (choise != 5)
        {
            printf("enter your first number: ");
            scanf("%d", &first_number);
            printf("enter your second number: ");
            scanf("%d", &second_number);
        }
        else if (choise == 5)
        {
            return 0;
        }
        {
            
        }
        switch (choise)
        {
        case 1:
            printf("Result : %d + %d = %d\n", first_number, second_number, first_number + second_number);
            break;
        case 2:
            printf("Result : %d - %d = %d\n", first_number, second_number, first_number - second_number);
            break;
        case 3:
            printf("Result : %d * %d = %d\n", first_number, second_number, first_number * second_number);
            break;
        case 4:
            printf("Result : %d / %d = %d\n", first_number, second_number, first_number / second_number);
            break;
        default:
            printf("Invalid Input\n");
            break;
        }

        char answer;
        printf("Do you want to perform another calculation? (Y/N): ");
        scanf(" %c", &answer);  // Add a space before %c
        
        if (answer == 'Y' || answer == 'y')
        {
            // Perform another calculation
        }
        else if (answer == 'N' || answer == 'n')
        {
            break;
        }
        else
        {
            printf("\nInvalid Input\n");
            continue;
        }
    }

    return 0;
}
