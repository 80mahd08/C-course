#include <math.h>

void main()
{
    printf("%f\n", 8.9);
    printf("%f\n", 5.0 + 4.5);
    printf("%f\n", 5.0 - 4.5);
    printf("%f\n", 5.0 * 4.5);
    printf("%f\n", 5.0 / 4.5);
    printf("%f\n", 5.0 + 4);
    printf("%f\n", 5 + 4);
    printf("%d\n", 5 / 4);
    printf("%f\n", 5 / 4.0);

    printf("%f\n", pow(2,3));// 2^3
    printf("%f\n", sqrt(9)); // square root of 9
    printf("%f\n", ceil(3.1)); // this function rounds the given value to the nearest integer
    printf("%f\n", floor(3.9)); // this function rounds the given value to the nearest integer
    printf("%f\n", round(3.5)); // this function rounds the given value to the nearest integer
    printf("%f\n", fabs(-3.5)); // this function gives the absolute value of the given value
    printf("%f\n", fmod(8, 4)); // this function gives the remainder of the division
    printf("%f\n", sin(0)); // this function gives the sine of the given value
    printf("%f\n", cos(0)); // this function gives the cosine of the given value
    printf("%f\n", tan(0)); // this function gives the tangent of the given value
    printf("%f\n", asin(0)); // this function gives the arc sine of the given value 
    printf("%f\n", acos(0)); // this function gives the arc cosine of the given value
    printf("%f\n", atan(0)); // this function gives the arc tangent of the given value
    printf("%f\n", atan2(0, 0)); // this function gives the arc tangent of the given value
    printf("%f\n", exp(0)); // this function gives the exponential of the given value
    printf("%f\n", log(0)); // this function gives the logarithm of the given value
    printf("%f\n", log10(0)); // this function gives the logarithm of the given value
    printf("%d\n", rand()); // this function gives a random integer value
    printf("%d\n", srand(0)); // this function sets the seed value for the random number generator

}

/*
C language provides a set of built-in math functions that are included in the <math.h> header file. These functions allow you to perform various mathematical operations and calculations. Here are some commonly used math functions in C:

    Trigonometric Functions:
        sin(x): Calculates the sine of x (in radians).
        cos(x): Calculates the cosine of x (in radians).
        tan(x): Calculates the tangent of x (in radians).
        asin(x): Calculates the arc sine of x, returning the result in radians.
        acos(x): Calculates the arc cosine of x, returning the result in radians.
        atan(x): Calculates the arc tangent of x, returning the result in radians.
        atan2(y, x): Calculates the arc tangent of y/x, returning the result in radians.

    Exponential and Logarithmic Functions:
        exp(x): Calculates the exponential value of x.
        log(x): Calculates the natural logarithm (base e) of x.
        log10(x): Calculates the base-10 logarithm of x.
        pow(x, y): Calculates the value of x raised to the power of y.
        sqrt(x): Calculates the square root of x.

    Rounding and Absolute Value Functions:
        ceil(x): Returns the smallest integer greater than or equal to x.
        floor(x): Returns the largest integer less than or equal to x.
        round(x): Rounds x to the nearest integer value.
        fabs(x): Returns the absolute value of x.

    Other Functions:
        fmod(x, y): Calculates the remainder of x divided by y.
        rand(): Generates a random integer.
        srand(seed): Sets the seed value for the random number generator.
*/