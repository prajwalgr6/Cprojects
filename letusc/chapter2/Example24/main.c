#include <stdio.h>
#include<math.h>
/*If lengths of three sides of a triangle are input through the
keyboard, write a program to find the area of the triangle */

int main()
{
    int a,b,c,s;
    float area;
    printf("enter the sides");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle is %f",area);
    return 0;
}
