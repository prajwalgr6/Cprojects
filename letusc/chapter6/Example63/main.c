#include <stdio.h>
/*Write a program to add first seven terms of the following series
using a for loop*/

int main()
{
    float sum;

    for(int i=1;i<=7;i++){
        float fact=1;
        float s=1;

        for(int j=1;j<=i;j++){
            fact = fact*j;
            s=i/fact;

        }
         sum = sum + s;
    }
    printf("%f",sum);
    return 0;
}
