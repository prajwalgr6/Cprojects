#include <stdio.h>
/*Temperature of a city in Fahrenheit degrees is input through the
keyboard. Write a program to convert this temperature into
Centigrade degrees */


int main()
{
    float F,C;
    printf("enter the Temperature of a city in Fahrenheit degrees ");
    scanf("%f",&F);

    C = (5.0/9.0)*(F-32.0);


    printf(" convert this temperature into Centigrade degrees is %f",C);
    return 0;
}
