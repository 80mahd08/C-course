#include <stdio.h>


int main()
{

    int towDArrayInt[2][3] = {{1,2,3},{4,5,6}};
    char towDArrayChar[2][3] = {{'a','b','c'},{'d','e','f'}};
    float towDArrayFloat[2][3] = {{1.1,2.2,3.3},{4.4,5.5,6.6}};
    double towDArrayDouble[2][3] = {{1.1,2.2,3.3},{4.4,5.5,6.6}};
    char towDArrayString[2][3][5] = {{"ahla","bya","cya"},{"dha","eha","fha"}};
    printf("%d\n",towDArrayInt[0][0]);
    printf("%c\n",towDArrayChar[0][0]);
    printf("%f\n",towDArrayFloat[0][0]);
    printf("%lf\n",towDArrayDouble[0][0]);
    printf("%s\n",towDArrayString[0][0]);
    printf("%c\n",towDArrayString[0][0][1]);

    int towDArrayexample[2][3] = {{1,2,3},{4,5,6}};
    int arraySizeExample = sizeof(towDArrayexample)/sizeof(towDArrayexample[0]);
    int innerArraySizeExample = sizeof(towDArrayexample[0])/sizeof(towDArrayexample[0][0]);
    for (int i = 0; i < arraySizeExample; i++)
    {
        for (int j = 0; j < innerArraySizeExample; j++)
        {
            printf("%d ",towDArrayexample[i][j]);
        }
        
    }
    
    return 0;
}