#include <stdio.h>
#include <math.h>

double f(double x)
{
    return pow(1*(1+1/x) , x);
}

int main()
{
    double i = 2;
    double maxInt = 10000000;
    double result;
    do
    {
        double result = f(i);
        i += 10000;
    } while (i != maxInt);
    printf("%lf ", result);
    
    return 0;
    
}
