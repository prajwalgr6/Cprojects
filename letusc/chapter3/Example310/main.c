#include <stdio.h>
/* Write a program to check whether a triangle is valid or not, when
the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180
degrees */

int main()
{
    int a,b,c,sum;
    printf("Enter three angles of the triangle");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180){
        printf("angle is triangle");
    }
    else{
        printf("angles is not traingle");
    }
    return 0;
}
