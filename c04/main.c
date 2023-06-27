#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Hello World\n");
    int a = 20;
    printf("%d", a);
    printf("\n");
    char b = 'A';
    printf("%c", b);
    printf("\n");
    float c = 2.5;
    printf("%f", c);
    printf("\n");
    double d = 2.5;
    printf("%lf", d);
    printf("\n");
    char str[] = "Hello";
    printf("%s", str);
    printf("\n");
    bool e = false;
    printf("%d", e);

    printf("\n");

    printf("hello %s your age is %d", "mahdi", 20);

    return 0;
}

// %d is allow me to print integer value
// %c is allow me to print character value
// %f is allow me to print float value
// %s is allow me to print string value
// %lf is allow me to print double value
// %d is allow me to print boolean value (true or false) true = 1, false = 0


