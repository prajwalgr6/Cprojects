#include <stdio.h>
#include<math.h>
/*Write a program to receive value of an angle in degrees and check
whether sum of squares of sine and cosine of this angle is equal to
1.*/


int main()
{
    int a;
    float b;
    printf("enter angle");
    scanf("%d",&a);
    b=sin(a)*sin(a)+cos(a)*cos(a);
    printf("%f",b);
    return 0;
}

