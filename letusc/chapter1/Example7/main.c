#include <stdio.h>
/*The length and breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the area
and perimeter of the rectangle, and the area and circumference of
the circle.*/

int main()
{
    float length,breadth,radius;
    printf("enter the lenth breadth and radius");
    scanf("%f %f %f ",&length,&breadth,&radius);
    printf(" the area and perimeter of the rectangle is  %f and %f \n",length*breadth,(length+breadth)*2);
    printf(" circumference and area of the circle is %f and %f",2*3.14*radius,radius*radius*3.14);
    return 0;
}
