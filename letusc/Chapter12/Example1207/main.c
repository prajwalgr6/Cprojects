//Write macro definitions with arguments for calculation of area and
//perimeter of a triangle, a square and a circle. Store these macro
//definitions in a file called “areaperi.h”. Include this file in your
//program, and call the macro definitions for calculating area and
//perimeter for different squares, triangles and circles
#include <stdio.h>
#include "Example1207.h"
int main()
{
    int l,b,h,r,s;
    int a,c,d,e,f,g;
    printf("enter length and breadth and height\n");
    scanf("%d %d %d",&l,&b,&h);
    printf("enter radius\n");
    scanf("%d",&r);
    printf("enter side of square\n");
    scanf("%d",&s);
    a=AREAC(r);
    printf("Area of circle is %d\n",a);
    c=PERIC(r);
    printf("Area of circle is %d \n",c);
    d=AREAT(l,b);
    printf("Area of circle is %d\n",d);
    e=PERIT(l,b,h);
    printf("Area of circle is %d \n",e);
    f=AREAS(s);
    printf("Area of circle is %d\n",f);
    g=PERIS(s);
    printf("Area of circle is %d \n",g);


}
