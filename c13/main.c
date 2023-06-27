#include <stdio.h>

int returnBigest(int firstNum , int secendNum , int therdNum)
{
    int result;
    if(firstNum > secendNum && firstNum > therdNum){
        result = firstNum;
    }else if(secendNum > firstNum && secendNum > therdNum){
        result = secendNum;
    }else{
        result = therdNum;
    }

    return result;
    
}

void main()
{

    printf("%d", returnBigest(4,2,5));
}

/*
&& => and
|| => or
<= => less then or equal
>= => greater then or equal
== => equal
!= => not equal
< => less then
> => greater then
!(3 > 2) => return false becouse the negation of true is false 

*/