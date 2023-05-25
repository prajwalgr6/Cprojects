//Write down macro definitions for the following:
//1. To find arithmetic mean of two numbers.
//2. To find absolute value of a number.
//3. To convert a upper case alphabet to lower case.
//4. To obtain the bigger of two numbers.
#include <stdio.h>
#include "Example1208.h"

int main()
{
    int a,b;

    char c;
    printf("enter the char\n");
    scanf("%c",&c);
    printf("enter Two numers\n");
    scanf("%d %d",&a,&b);

    printf("mean of 2 number %d\n",ARITH(a,b));
    printf("absolute value is %d\n",ABSO(a));
    printf("upper case is %c\n",UPP(c));
    BIG(a,b);





    return 0;
}
