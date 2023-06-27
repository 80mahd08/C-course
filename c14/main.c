#include <stdio.h>

int main()
{
    double first_number, second_number;
    char operator;
    printf("enter the first number: ");
    scanf("%lf", &first_number);
    printf("enter the second number: ");
    scanf("%lf", &second_number);
    printf("enter the operator: ");
    scanf(" %c", &operator);  // Add space before %c to consume whitespace
    switch (operator)
    {
        case '+':
            printf("the sum is: %lf", first_number + second_number);
            break;
        case '-':
            printf("the difference is: %lf", first_number - second_number);
            break;
        case '*':
            printf("the product is: %lf", first_number * second_number);
            break;
        case '/':
            printf("the quotient is: %lf", first_number / second_number);
            break;
        default:
            printf("invalid operator");
    }
    return 0;
}
